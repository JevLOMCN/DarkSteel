// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 50

// StaticClass @ 14cea4710

UClass * __cdecl UGeometryScriptLibrary_VectorMathFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_VectorMathFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_VectorMathFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_VectorMathFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_VectorMathFunctions @ 14ceae9f0

UGeometryScriptLibrary_VectorMathFunctions * __thiscall
UGeometryScriptLibrary_VectorMathFunctions::UGeometryScriptLibrary_VectorMathFunctions
          (UGeometryScriptLibrary_VectorMathFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_VectorMathFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_VectorMathFunctions @ 14ceaea20

UGeometryScriptLibrary_VectorMathFunctions * __thiscall
UGeometryScriptLibrary_VectorMathFunctions::UGeometryScriptLibrary_VectorMathFunctions
          (UGeometryScriptLibrary_VectorMathFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_VectorMathFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_VectorMathFunctions @ 14ceaec50

void __thiscall
UGeometryScriptLibrary_VectorMathFunctions::~UGeometryScriptLibrary_VectorMathFunctions
          (UGeometryScriptLibrary_VectorMathFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_VectorMathFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConstantScalarMultiply @ 14ceb48a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGeometryScriptScalarList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply
          (FGeometryScriptScalarList *__return_storage_ptr__,double param_1,
          FGeometryScriptScalarList *param_2)

{
  double dVar1;
  int iVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FGeometryScriptScalarList *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  (__return_storage_ptr__->List).Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = (param_2->List).Object;
  if (pTVar3 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar2 = pTVar3->ArrayNum;
    FGeometryScriptScalarList::Reset(__return_storage_ptr__,0);
    if (((__return_storage_ptr__->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0)
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FGeometryScriptScalarList *)(*pcVar4)();
      return pFVar7;
    }
    this = (__return_storage_ptr__->List).Object;
    if (this->ArrayNum != iVar2) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,iVar2,Default);
    }
    uVar8 = 0;
    if (0 < iVar2) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FGeometryScriptScalarList *)(*pcVar4)();
          return pFVar7;
        }
        dVar1 = *(double *)((pTVar3->AllocatorInstance).Data + lVar9 * 8);
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FGeometryScriptScalarList *)(*pcVar4)();
          return pFVar7;
        }
        uVar8 = uVar8 + 1;
        *(double *)((this->AllocatorInstance).Data + lVar9 * 8) = param_1 * dVar1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConstantScalarMultiplyInPlace @ 14ceb4a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace
          (double param_1,FGeometryScriptScalarList *param_2)

{
  double dVar1;
  int iVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  pTVar3 = (param_2->List).Object;
  if (pTVar3 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    uVar7 = 0;
    iVar2 = pTVar3->ArrayNum;
    if (0 < (longlong)iVar2) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar1 = *(double *)((pTVar3->AllocatorInstance).Data + lVar8 * 8);
        uVar6 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = uVar7 + 1;
        *(double *)((pTVar3->AllocatorInstance).Data + lVar8 * 8) = param_1 * dVar1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar2);
    }
  }
  return;
}

// ConstantVectorMultiply @ 14ceb4bf0

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptVectorList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply
          (FGeometryScriptVectorList *__return_storage_ptr__,double param_1,
          FGeometryScriptVectorList *param_2)

{
  EListOpResultCode EVar1;
  double local_res10 [3];
  
  (__return_storage_ptr__->List).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res10[0] = param_1;
  EVar1 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply_::__l2::<lambda_1>_>
                    (param_2,__return_storage_ptr__,(<lambda_1>)local_res10);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConstantVectorMultiplyInPlace @ 14ceb4c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace
          (double param_1,FGeometryScriptVectorList *param_2)

{
  EListOpResultCode EVar1;
  double local_res8 [4];
  
  local_res8[0] = param_1;
  EVar1 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace_::__l2::<lambda_1>_>
                    (param_2,param_2,(<lambda_1>)local_res8);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return;
}

// GetPrivateStaticClass @ 14cebd4f0

UClass * __cdecl UGeometryScriptLibrary_VectorMathFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_VectorMathFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_VectorMathFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_VectorMathFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_VectorMathFunctions.InnerSingleton;
}

// ScalarBlend @ 14cec1d30

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptScalarList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend
          (FGeometryScriptScalarList *__return_storage_ptr__,FGeometryScriptScalarList *param_1,
          FGeometryScriptScalarList *param_2,double param_3,double param_4)

{
  EListOpResultCode EVar1;
  double local_res20;
  <lambda_1> local_18;
  
  (__return_storage_ptr__->List).Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_18.ConstantA = &local_res20;
  local_18.ConstantB = &param_4;
  local_res20 = param_3;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptScalarList,FGeometryScriptScalarList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend_::__l2::<lambda_1>_>
                    (param_1,param_2,__return_storage_ptr__,&local_18);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ScalarBlendInPlace @ 14cec1dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace
          (FGeometryScriptScalarList *param_1,FGeometryScriptScalarList *param_2,double param_3,
          double param_4)

{
  EListOpResultCode EVar1;
  double local_res18;
  double local_res20;
  <lambda_1> local_18;
  
  local_18.ConstantA = &local_res18;
  local_18.ConstantB = &local_res20;
  local_res18 = param_3;
  local_res20 = param_4;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptScalarList,FGeometryScriptScalarList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace_::__l2::<lambda_1>_>
                    (param_1,param_2,param_2,&local_18);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ScalarInvert @ 14cec1e40

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptScalarList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert
          (FGeometryScriptScalarList *__return_storage_ptr__,FGeometryScriptScalarList *param_1,
          double param_2,double param_3,double param_4)

{
  EListOpResultCode EVar1;
  double local_res18;
  double local_res20;
  <lambda_1> local_28;
  
  (__return_storage_ptr__->List).Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_28.Epsilon = &param_4;
  local_28.Numerator = &local_res18;
  local_28.SetOnFailure = &local_res20;
  local_res18 = param_2;
  local_res20 = param_3;
  EVar1 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptScalarList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert_::__l2::<lambda_1>_>
                    (param_1,__return_storage_ptr__,&local_28);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ScalarInvertInPlace @ 14cec1ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace
          (FGeometryScriptScalarList *param_1,double param_2,double param_3,double param_4)

{
  EListOpResultCode EVar1;
  double local_res10;
  double local_res18;
  double local_res20;
  <lambda_1> local_28;
  
  local_28.Epsilon = &local_res20;
  local_28.Numerator = &local_res10;
  local_28.SetOnFailure = &local_res18;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EVar1 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptScalarList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace_::__l2::<lambda_1>_>
                    (param_1,param_1,&local_28);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return;
}

// ScalarMultiply @ 14cec1f40

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptScalarList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply
          (FGeometryScriptScalarList *__return_storage_ptr__,FGeometryScriptScalarList *param_1,
          FGeometryScriptScalarList *param_2,double param_3)

{
  EListOpResultCode EVar1;
  double local_res20;
  
  (__return_storage_ptr__->List).Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res20 = param_3;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptScalarList,FGeometryScriptScalarList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply_::__l2::<lambda_1>_>
                    (param_1,param_2,__return_storage_ptr__,(<lambda_1>)&local_res20);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ScalarMultiplyInPlace @ 14cec1fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace
          (FGeometryScriptScalarList *param_1,FGeometryScriptScalarList *param_2,double param_3)

{
  EListOpResultCode EVar1;
  double local_res18 [2];
  
  local_res18[0] = param_3;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptScalarList,FGeometryScriptScalarList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace_::__l2::<lambda_1>_>
                    (param_1,param_2,param_2,(<lambda_1>)local_res18);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ScalarVectorMultiply @ 14cec2030

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptVectorList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply
          (FGeometryScriptVectorList *__return_storage_ptr__,FGeometryScriptScalarList *param_1,
          FGeometryScriptVectorList *param_2,double param_3)

{
  EListOpResultCode EVar1;
  double local_res20;
  
  (__return_storage_ptr__->List).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res20 = param_3;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptScalarList,FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply_::__l2::<lambda_1>_>
                    (param_1,param_2,__return_storage_ptr__,(<lambda_1>)&local_res20);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ScalarVectorMultiplyInPlace @ 14cec20c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace
          (FGeometryScriptScalarList *param_1,FGeometryScriptVectorList *param_2,double param_3)

{
  EListOpResultCode EVar1;
  double local_res18 [2];
  
  local_res18[0] = param_3;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptScalarList,FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace_::__l2::<lambda_1>_>
                    (param_1,param_2,param_2,(<lambda_1>)local_res18);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions @ 14cec2940

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::
StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x16;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VectorBlend @ 14cec3390

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptVectorList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorBlend
          (FGeometryScriptVectorList *__return_storage_ptr__,FGeometryScriptVectorList *param_1,
          FGeometryScriptVectorList *param_2,double param_3,double param_4)

{
  EListOpResultCode EVar1;
  double local_res20;
  <lambda_1> local_18;
  
  (__return_storage_ptr__->List).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_18.ConstantA = &local_res20;
  local_18.ConstantB = &param_4;
  local_res20 = param_3;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::VectorBlend_::__l2::<lambda_1>_>
                    (param_1,param_2,__return_storage_ptr__,&local_18);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// VectorBlendInPlace @ 14cec3430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace
          (FGeometryScriptVectorList *param_1,FGeometryScriptVectorList *param_2,double param_3,
          double param_4)

{
  EListOpResultCode EVar1;
  double local_res18;
  double local_res20;
  <lambda_1> local_18;
  
  local_18.ConstantA = &local_res18;
  local_18.ConstantB = &local_res20;
  local_res18 = param_3;
  local_res20 = param_4;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace_::__l2::<lambda_1>_>
                    (param_1,param_2,param_2,&local_18);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// VectorCross @ 14cec34a0

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptVectorList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorCross
          (FGeometryScriptVectorList *__return_storage_ptr__,FGeometryScriptVectorList *param_1,
          FGeometryScriptVectorList *param_2)

{
  EListOpResultCode EVar1;
  
  (__return_storage_ptr__->List).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::VectorCross_::__l2::<lambda_1>_>
                    (param_1,param_2,__return_storage_ptr__,(<lambda_1>)0x0);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// VectorDot @ 14cec3520

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptScalarList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorDot
          (FGeometryScriptScalarList *__return_storage_ptr__,FGeometryScriptVectorList *param_1,
          FGeometryScriptVectorList *param_2)

{
  EListOpResultCode EVar1;
  
  (__return_storage_ptr__->List).Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar1 = VectorMathFunctionsLocal::
          BinaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::VectorDot_::__l2::<lambda_1>_>
                    (param_1,param_2,__return_storage_ptr__,(<lambda_1>)0x0);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// VectorInverseTransformInPlace @ 14cec35a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorInverseTransformInPlace
          (FGeometryScriptVectorList *param_1,TTransform<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 local_res8 [8];
  
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pTVar3 = (param_1->List).Object;
  if (pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar16 + (longlong)iVar2 * 0x18;
    if (param_3) {
      while( true ) {
        if (pTVar3->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar16 == pFVar1) break;
        dVar37 = (param_2->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar39 = (param_2->Rotation).XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar5 = (param_2->Rotation).ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar6 = (param_2->Rotation).ZW.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar20 = *(double *)&pFVar16[0x10].field_0x0 - (param_2->Translation).ZW.m128d_f64[0];
        dVar10 = *(double *)&pFVar16->field_0x0 - (param_2->Translation).XY.m128d_f64[0];
        dVar38 = *(double *)(pFVar16 + 8) - (param_2->Translation).XY.m128d_f64[1];
        uVar50 = (undefined4)((ulonglong)dVar38 >> 0x20);
        auVar52._8_4_ = SUB84(dVar38,0);
        auVar52._0_8_ = dVar10;
        auVar52._12_4_ = uVar50;
        auVar21._8_4_ = SUB84(dVar5,0);
        auVar21._0_8_ = dVar39;
        auVar21._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar34._8_4_ = SUB84(dVar39,0);
        auVar34._0_8_ = dVar37;
        auVar34._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        auVar29._8_4_ = SUB84(dVar38,0);
        auVar29._0_8_ = dVar10;
        auVar29._12_4_ = uVar50;
        auVar53._0_8_ = auVar52._8_8_ * dVar37 - dVar39 * dVar10;
        auVar53._8_8_ = dVar20 * dVar39 - auVar21._8_8_ * dVar38;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar20;
        auVar30 = blendpd(auVar29,auVar11,2);
        auVar35._8_4_ = SUB84(dVar6,0);
        auVar35._0_8_ = dVar5;
        auVar35._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar35 = blendpd(auVar34,auVar35,2);
        auVar31._0_8_ = auVar30._0_8_ * dVar5 - auVar35._0_8_ * dVar20;
        auVar31._8_8_ = auVar30._8_8_ * dVar6 - auVar35._8_8_ * 0.0;
        auVar30 = blendpd(auVar53,auVar31,2);
        dVar8 = auVar53._8_8_ + auVar53._8_8_;
        dVar9 = auVar31._0_8_ + auVar31._0_8_;
        uVar50 = SUB84(dVar9,0);
        uVar51 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar54._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar54._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        auVar44._8_4_ = uVar50;
        auVar44._0_8_ = dVar8;
        auVar44._12_4_ = uVar51;
        auVar22._8_4_ = uVar50;
        auVar22._0_8_ = dVar8;
        auVar22._12_4_ = uVar51;
        auVar40._8_4_ = uVar50;
        auVar40._0_8_ = dVar8;
        auVar40._12_4_ = uVar51;
        auVar30 = blendpd(auVar40,auVar54,2);
        auVar45._0_8_ = auVar44._8_8_ * dVar37 - dVar8 * dVar39;
        auVar45._8_8_ = auVar54._0_8_ * dVar39 - auVar22._8_8_ * dVar5;
        auVar23._8_4_ = SUB84(auVar54._8_8_,0);
        auVar23._0_8_ = auVar54._0_8_;
        auVar23._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
        auVar41._0_8_ = auVar30._0_8_ * dVar5 - auVar54._0_8_ * auVar35._0_8_;
        auVar41._8_8_ = auVar30._8_8_ * dVar6 - auVar23._8_8_ * auVar35._8_8_;
        auVar35 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
        lVar17 = -(ulonglong)
                  ((double)CONCAT44(uVar13 & auVar35._4_4_,uVar12 & auVar35._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
        lVar18 = -(ulonglong)
                  ((double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) &
                                    uVar13,*(uint *)(param_2->Scale3D).XY.m128d_f64 & uVar12) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar19 = -(ulonglong)
                  ((double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) &
                                    uVar15,*(uint *)((param_2->Scale3D).XY.m128d_f64 + 1) & uVar14)
                  <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar24._8_4_ = SUB84(auVar45._8_8_,0);
        auVar24._0_8_ = auVar45._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
        auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar7._0_8_ = auVar35._0_8_;
        auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
        auVar46 = blendpd(auVar45,auVar41,2);
        dVar5 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar30._12_4_,
                                 ~(uint)lVar19 & auVar30._8_4_) *
                (dVar9 * dVar6 + dVar38 + auVar41._0_8_);
        auVar4._8_4_ = SUB84(dVar5,0);
        auVar4._0_8_ = (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                                        ~(uint)lVar18 & auVar30._0_4_) *
                       (dVar8 * dVar6 + dVar10 + auVar24._8_8_);
        auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])pFVar16 = auVar4;
        *(double *)&pFVar16[0x10].field_0x0 =
             (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar35._4_4_,
                              ~(uint)lVar17 & auVar35._0_4_) *
             (auVar54._0_8_ * dVar6 + dVar20 + auVar46._0_8_);
        pFVar16 = pFVar16 + 0x18;
      }
    }
    else {
      while( true ) {
        if (pTVar3->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar16 == pFVar1) break;
        auVar35 = *(undefined1 (*) [16])pFVar16;
        dVar5 = *(double *)&pFVar16[0x10].field_0x0;
        dVar38 = (param_2->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar20 = (param_2->Rotation).XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar6 = (param_2->Rotation).ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar8 = (param_2->Rotation).ZW.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar33._8_8_ = 0;
        auVar33._0_8_ = dVar5;
        auVar46 = blendpd(auVar35,auVar33,2);
        dVar37 = auVar35._8_8_;
        auVar25._8_4_ = SUB84(dVar6,0);
        auVar25._0_8_ = dVar20;
        auVar25._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar36._8_4_ = SUB84(dVar20,0);
        auVar36._0_8_ = dVar38;
        auVar36._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        auVar55._0_8_ = dVar37 * dVar38 - dVar20 * auVar35._0_8_;
        auVar55._8_8_ = dVar5 * dVar20 - auVar25._8_8_ * dVar37;
        auVar30._8_4_ = SUB84(dVar8,0);
        auVar30._0_8_ = dVar6;
        auVar30._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar30 = blendpd(auVar36,auVar30,2);
        auVar32._0_8_ = auVar46._0_8_ * dVar6 - auVar30._0_8_ * dVar5;
        auVar32._8_8_ = auVar46._8_8_ * dVar8 - auVar30._8_8_ * 0.0;
        auVar46 = blendpd(auVar55,auVar32,2);
        dVar9 = auVar55._8_8_ + auVar55._8_8_;
        dVar10 = auVar32._0_8_ + auVar32._0_8_;
        uVar50 = SUB84(dVar10,0);
        uVar51 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar56._0_8_ = auVar46._0_8_ + auVar46._0_8_;
        auVar56._8_8_ = auVar46._8_8_ + auVar46._8_8_;
        auVar47._8_4_ = uVar50;
        auVar47._0_8_ = dVar9;
        auVar47._12_4_ = uVar51;
        auVar26._8_4_ = uVar50;
        auVar26._0_8_ = dVar9;
        auVar26._12_4_ = uVar51;
        auVar42._8_4_ = uVar50;
        auVar42._0_8_ = dVar9;
        auVar42._12_4_ = uVar51;
        auVar46 = blendpd(auVar42,auVar56,2);
        auVar48._0_8_ = auVar47._8_8_ * dVar38 - dVar9 * dVar20;
        auVar48._8_8_ = auVar56._0_8_ * dVar20 - auVar26._8_8_ * dVar6;
        auVar27._8_4_ = SUB84(auVar56._8_8_,0);
        auVar27._0_8_ = auVar56._0_8_;
        auVar27._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
        auVar43._0_8_ = auVar46._0_8_ * dVar6 - auVar56._0_8_ * auVar30._0_8_;
        auVar43._8_8_ = auVar46._8_8_ * dVar8 - auVar27._8_8_ * auVar30._8_8_;
        auVar30 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
        lVar17 = -(ulonglong)
                  ((double)CONCAT44(auVar30._4_4_ & uVar13,auVar30._0_4_ & uVar12) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
        lVar18 = -(ulonglong)
                  ((double)CONCAT44(uVar13 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4
                                                      ),
                                    uVar12 & *(uint *)(param_2->Scale3D).XY.m128d_f64) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar19 = -(ulonglong)
                  ((double)CONCAT44(uVar15 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 +
                                                      0xc),
                                    uVar14 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1)) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar28._8_4_ = SUB84(auVar48._8_8_,0);
        auVar28._0_8_ = auVar48._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
        auVar49._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar49._0_8_ = auVar30._0_8_;
        auVar49._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar49);
        auVar49 = blendpd(auVar48,auVar43,2);
        dVar6 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar33._12_4_,
                                 ~(uint)lVar19 & auVar33._8_4_) *
                (dVar10 * dVar8 + dVar37 + auVar43._0_8_);
        auVar46._8_4_ = SUB84(dVar6,0);
        auVar46._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar33._4_4_,
                              ~(uint)lVar18 & auVar33._0_4_) *
             (dVar9 * dVar8 + auVar35._0_8_ + auVar28._8_8_);
        auVar46._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *(undefined1 (*) [16])pFVar16 = auVar46;
        *(double *)&pFVar16[0x10].field_0x0 =
             (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar30._4_4_,
                              ~(uint)lVar17 & auVar30._0_4_) *
             (auVar56._0_8_ * dVar8 + dVar5 + auVar49._0_8_);
        pFVar16 = pFVar16 + 0x18;
      }
    }
  }
  return;
}

// VectorLength @ 14cec3a20

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptScalarList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorLength
          (FGeometryScriptScalarList *__return_storage_ptr__,FGeometryScriptVectorList *param_1)

{
  EListOpResultCode EVar1;
  
  (__return_storage_ptr__->List).Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar1 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptVectorList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::VectorLength_::__l2::<lambda_1>_>
                    (param_1,__return_storage_ptr__,(<lambda_1>)0x0);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// VectorNormalizeInPlace @ 14cec3a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace
          (FGeometryScriptVectorList *param_1,TVector<double> *param_2)

{
  EListOpResultCode EVar1;
  
  EVar1 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace_::__l2::<lambda_1>_>
                    (param_1,param_1,(<lambda_1>)param_2);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return;
}

// VectorPlaneProjectInPlace @ 14cec3ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorPlaneProjectInPlace
          (FGeometryScriptVectorList *param_1,TPlane<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pTVar5 = (param_1->List).Object;
  if (pTVar5 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    pFVar7 = (pTVar5->AllocatorInstance).Data;
    iVar4 = pTVar5->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar4 * 0x18;
    while( true ) {
      if (pTVar5->ArrayNum != iVar4) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      dVar6 = (*(double *)(pFVar7 + 8) * (double)param_2->_padding_ +
               *(double *)pFVar7 * (double)param_2->_padding_ +
              *(double *)(pFVar7 + 0x10) * (double)param_2->_padding_) - param_2->W;
      dVar2 = (double)param_2->_padding_;
      dVar3 = (double)param_2->_padding_;
      *(double *)pFVar7 = *(double *)pFVar7 - dVar6 * (double)param_2->_padding_;
      *(double *)(pFVar7 + 8) = *(double *)(pFVar7 + 8) - dVar6 * dVar2;
      *(double *)(pFVar7 + 0x10) = *(double *)(pFVar7 + 0x10) - dVar6 * dVar3;
      pFVar7 = pFVar7 + 0x18;
    }
  }
  return;
}

// VectorToScalar @ 14cec3c00

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptScalarList * __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar
          (FGeometryScriptScalarList *__return_storage_ptr__,FGeometryScriptVectorList *param_1,
          double param_2,double param_3,double param_4)

{
  EListOpResultCode EVar1;
  double local_res18;
  double local_res20;
  <lambda_1> local_28;
  
  (__return_storage_ptr__->List).Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->List).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_28.ConstantX = &local_res18;
  local_28.ConstantY = &local_res20;
  local_28.ConstantZ = &param_4;
  local_res18 = param_2;
  local_res20 = param_3;
  EVar1 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptVectorList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar_::__l2::<lambda_1>_>
                    (param_1,__return_storage_ptr__,&local_28);
  if ((EVar1 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// VectorTransformInPlace @ 14cec3c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::VectorTransformInPlace
          (FGeometryScriptVectorList *param_1,TTransform<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 local_res8 [8];
  
  pTVar3 = (param_1->List).Object;
  if (pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    pFVar12 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 0x18;
    if (param_3) {
      while( true ) {
        if (pTVar3->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar12 == pFVar1) break;
        auVar27 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar18 = auVar27._0_8_;
        dVar9 = *(double *)&pFVar12[0x10].field_0x0 * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar24 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar6 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)&pFVar12->field_0x0;
        dVar7 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar12 + 8);
        uVar30 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar14 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar20 = blendpd(auVar14,auVar27,2);
        auVar31._8_4_ = SUB84(dVar7,0);
        auVar31._0_8_ = dVar6;
        auVar31._12_4_ = uVar30;
        auVar32._0_8_ = auVar31._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar6;
        auVar32._8_8_ = dVar9 * auVar14._8_8_ - dVar18 * dVar7;
        auVar13._8_4_ = SUB84(dVar7,0);
        auVar13._0_8_ = dVar6;
        auVar13._12_4_ = uVar30;
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = dVar9;
        auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar14 = blendpd(auVar13,auVar8,2);
        auVar15._0_8_ = auVar14._0_8_ * dVar18 - auVar20._0_8_ * dVar9;
        auVar15._8_8_ = auVar14._8_8_ * auVar27._8_8_ - auVar20._8_8_ * dVar10;
        auVar14 = blendpd(auVar32,auVar15,2);
        dVar5 = auVar32._8_8_ + auVar32._8_8_;
        dVar10 = auVar15._0_8_ + auVar15._0_8_;
        uVar30 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar33._0_8_ = auVar14._0_8_ + auVar14._0_8_;
        auVar33._8_8_ = auVar14._8_8_ + auVar14._8_8_;
        auVar25._8_4_ = SUB84(dVar10,0);
        auVar25._0_8_ = dVar5;
        auVar25._12_4_ = uVar30;
        auVar21._8_4_ = SUB84(dVar10,0);
        auVar21._0_8_ = dVar5;
        auVar21._12_4_ = uVar30;
        auVar14 = blendpd(auVar21,auVar33,2);
        auVar26._0_8_ = auVar25._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar5;
        auVar26._8_8_ = auVar33._0_8_ * auVar24._8_8_ - dVar18 * dVar10;
        auVar16._8_4_ = SUB84(auVar26._8_8_,0);
        auVar16._0_8_ = auVar26._0_8_;
        auVar16._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
        auVar24 = blendpd(auVar24,auVar27,2);
        auVar22._0_8_ = auVar14._0_8_ * dVar18 - auVar24._0_8_ * auVar33._0_8_;
        auVar22._8_8_ = auVar14._8_8_ * auVar27._8_8_ - auVar24._8_8_ * auVar33._8_8_;
        auVar27 = blendpd(auVar26,auVar22,2);
        dVar7 = dVar10 * dVar11 + dVar7 + auVar22._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        dVar10 = (param_2->Translation).ZW.m128d_f64[0];
        auVar4._8_4_ = SUB84(dVar7,0);
        auVar4._0_8_ = dVar5 * dVar11 + dVar6 + auVar16._8_8_ +
                       (param_2->Translation).XY.m128d_f64[0];
        auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])pFVar12 = auVar4;
        *(double *)&pFVar12[0x10].field_0x0 =
             auVar33._0_8_ * dVar11 + dVar9 + auVar27._0_8_ + dVar10;
        pFVar12 = pFVar12 + 0x18;
      }
    }
    else {
      while( true ) {
        if (pTVar3->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar12 == pFVar1) break;
        auVar27 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar18 = auVar27._0_8_;
        dVar9 = *(double *)&pFVar12[0x10].field_0x0 * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar24 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar7 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)&pFVar12->field_0x0;
        dVar6 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar12 + 8);
        uVar30 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar14 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar23 = blendpd(auVar14,auVar27,2);
        auVar34._8_4_ = SUB84(dVar6,0);
        auVar34._0_8_ = dVar7;
        auVar34._12_4_ = uVar30;
        auVar35._0_8_ = auVar34._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar7;
        auVar35._8_8_ = dVar9 * auVar14._8_8_ - dVar18 * dVar6;
        auVar20._8_4_ = SUB84(dVar6,0);
        auVar20._0_8_ = dVar7;
        auVar20._12_4_ = uVar30;
        auVar14._8_4_ = SUB84(dVar10,0);
        auVar14._0_8_ = dVar9;
        auVar14._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar14 = blendpd(auVar20,auVar14,2);
        auVar17._0_8_ = auVar14._0_8_ * dVar18 - auVar23._0_8_ * dVar9;
        auVar17._8_8_ = auVar14._8_8_ * auVar27._8_8_ - auVar23._8_8_ * dVar10;
        auVar14 = blendpd(auVar35,auVar17,2);
        dVar10 = auVar35._8_8_ + auVar35._8_8_;
        dVar5 = auVar17._0_8_ + auVar17._0_8_;
        uVar30 = (undefined4)((ulonglong)dVar5 >> 0x20);
        auVar36._0_8_ = auVar14._0_8_ + auVar14._0_8_;
        auVar36._8_8_ = auVar14._8_8_ + auVar14._8_8_;
        auVar28._8_4_ = SUB84(dVar5,0);
        auVar28._0_8_ = dVar10;
        auVar28._12_4_ = uVar30;
        auVar23._8_4_ = SUB84(dVar5,0);
        auVar23._0_8_ = dVar10;
        auVar23._12_4_ = uVar30;
        auVar14 = blendpd(auVar23,auVar36,2);
        auVar29._0_8_ = auVar28._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar10;
        auVar29._8_8_ = auVar36._0_8_ * auVar24._8_8_ - dVar18 * dVar5;
        auVar20 = blendpd(auVar24,auVar27,2);
        auVar24._8_4_ = SUB84(auVar29._8_8_,0);
        auVar24._0_8_ = auVar29._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
        auVar19._0_8_ = auVar14._0_8_ * dVar18 - auVar20._0_8_ * auVar36._0_8_;
        auVar19._8_8_ = auVar14._8_8_ * auVar27._8_8_ - auVar20._8_8_ * auVar36._8_8_;
        auVar14 = blendpd(auVar29,auVar19,2);
        dVar5 = dVar5 * dVar11 + dVar6 + auVar19._0_8_;
        auVar27._8_4_ = SUB84(dVar5,0);
        auVar27._0_8_ = dVar10 * dVar11 + dVar7 + auVar24._8_8_;
        auVar27._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])pFVar12 = auVar27;
        *(double *)&pFVar12[0x10].field_0x0 = auVar36._0_8_ * dVar11 + dVar9 + auVar14._0_8_;
        pFVar12 = pFVar12 + 0x18;
      }
    }
  }
  return;
}

// execConstantScalarMultiply @ 14cec5980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execConstantScalarMultiply
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  double dVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  double local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> **local_res18;
  TArray<double,TSizedDefaultAllocator<32>_> *local_88;
  FSharedReferencer<1> local_80;
  longlong *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60 [5];
  
  local_res10 = 0.0;
  local_res18 = param_3;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_78 = (longlong *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar7 = pTStack_70;
  plVar6 = local_78;
  dVar5 = local_res10;
  pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_78 == (longlong *)0x0) {
    pTVar14 = pTVar12;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar2 = (int)local_78[1];
    local_60[0].ReferenceController = ::operator_new(0x20);
    if (local_60[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pTVar13 = (TArray<double,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      local_60[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      (local_60[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13 = (TArray<double,TSizedDefaultAllocator<32>_> *)(local_60[0].ReferenceController + 1);
      (local_60[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_60[0].ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_NV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_60[0].ReferenceController[1]._padding_ = 0;
      local_60[0].ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_60[0].ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar13 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      (local_60[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar8.ReferenceController = local_60[0].ReferenceController;
    local_68 = 0;
    local_88 = pTVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    pTVar13 = local_88;
    if ((local_88 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar13->ArrayNum = 0;
    if (pTVar13->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar13->AllocatorInstance,0,&pTVar13->ArrayMax);
    }
    pTVar13 = local_88;
    if ((local_88 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pTVar13->ArrayNum != iVar2) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(pTVar13,iVar2,Default);
    }
    pTVar14 = pTVar13;
    if (0 < iVar2) {
      lVar15 = 0;
      do {
        uVar11 = (uint)pTVar12;
        uVar10 = 0;
        if ((int)uVar11 < (int)plVar6[1]) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar1 = *(double *)(*plVar6 + lVar15 * 8);
        uVar10 = 0;
        if ((int)uVar11 < pTVar13->ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar11 + 1);
        *(double *)((pTVar13->AllocatorInstance).Data + lVar15 * 8) = dVar5 * dVar1;
        lVar15 = lVar15 + 1;
        pTVar14 = local_88;
      } while (lVar15 < iVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (local_res18 != &local_88) {
    *local_res18 = pTVar14;
    local_88 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(local_res18 + 1),&local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// execConstantScalarMultiplyInPlace @ 14cec5d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execConstantScalarMultiplyInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  double local_res10;
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  dVar5 = local_res10;
  plVar8 = &local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar8 = (longlong *)*plVar8;
  if (plVar8 == (longlong *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    uVar9 = 0;
    lVar4 = plVar8[1];
    if (0 < (longlong)(int)lVar4) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (int)plVar8[1]) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar1 = *(double *)(*plVar8 + lVar10 * 8);
        uVar7 = 0;
        if ((int)uVar9 < (int)plVar8[1]) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(double *)(*plVar8 + lVar10 * 8) = dVar5 * dVar1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)lVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execConstantVectorMultiply @ 14cec5f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execConstantVectorMultiply
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FProperty *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  double local_res10;
  FGeometryScriptVectorList *local_res18;
  FGeometryScriptVectorList local_98;
  longlong *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  
  local_res10 = 0.0;
  local_res18 = param_3;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88 = (longlong *)0x0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar11 = pTStack_80;
  plVar10 = local_88;
  dVar9 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_88 == (longlong *)0x0) {
    pTVar16 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar4 = (int)local_88[1];
    FGeometryScriptVectorList::Reset(&local_98,0);
    this = local_98.List.Object;
    if ((local_98.List.Object ==
         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (this->ArrayNum != iVar4) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (this,iVar4,Default);
    }
    uVar15 = 0;
    pTVar16 = this;
    if (0 < iVar4) {
      lVar17 = 0;
      lVar14 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar15 < (int)plVar10[1]) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *plVar10;
        dVar1 = *(double *)(lVar14 + lVar6);
        dVar2 = *(double *)(lVar14 + 8 + lVar6);
        dVar3 = *(double *)(lVar14 + 0x10 + lVar6);
        uVar13 = 0;
        if ((int)uVar15 < this->ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (this->AllocatorInstance).Data;
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
        *(double *)(pFVar7 + lVar14) = dVar9 * dVar1;
        *(double *)(pFVar7 + lVar14 + 8) = dVar9 * dVar2;
        *(double *)(pFVar7 + lVar14 + 0x10) = dVar9 * dVar3;
        lVar14 = lVar14 + 0x18;
        pTVar16 = local_98.List.Object;
        param_3 = local_res18;
      } while (lVar17 < iVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (param_3 != &local_98) {
    (((FGeometryScriptVectorList *)param_3)->List).Object = pTVar16;
    local_98.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(((FGeometryScriptVectorList *)param_3)->List).SharedReferenceCount,
               &local_98.List.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  return;
}

// execConstantVectorMultiplyInPlace @ 14cec6290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execConstantVectorMultiplyInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EListOpResultCode EVar2;
  FGeometryScriptVectorList *pFVar3;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  FGeometryScriptVectorList local_18;
  
  local_res10[0] = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20 = local_res10[0];
  pFVar3 = &local_18;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    pFVar3 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace_::__l2::<lambda_1>_>
                    (pFVar3,pFVar3,(<lambda_1>)&local_res20);
  if ((EVar2 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  return;
}

// execScalarBlend @ 14ced6540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarBlend
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FProperty *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar19;
  double local_res10;
  FGeometryScriptScalarList *local_res18;
  double local_res20;
  FGeometryScriptScalarList local_a0;
  longlong *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  longlong *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  
  local_80 = (longlong *)0x0;
  pTStack_78 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_90 = (longlong *)0x0;
  pTStack_88 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar13 = pTStack_78;
  plVar12 = local_80;
  pTVar11 = pTStack_88;
  plVar10 = local_90;
  dVar9 = local_res20;
  dVar8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_88->SharedReferenceCount = (atomic<int>)((int)pTStack_88->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_78->SharedReferenceCount = (atomic<int>)((int)pTStack_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((local_80 == (longlong *)0x0) || (local_90 == (longlong *)0x0)) ||
     ((int)local_80[1] != (int)local_90[1])) {
    pTVar19 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      pTVar19 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
  else {
    iVar4 = (int)local_80[1];
    FGeometryScriptScalarList::Reset(&local_a0,0);
    this = local_a0.List.Object;
    if ((local_a0.List.Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (this->ArrayNum != iVar4) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,iVar4,Default);
    }
    uVar16 = 0;
    pTVar19 = this;
    if (0 < iVar4) {
      lVar17 = 0;
      do {
        uVar18 = ~uVar16 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar16 < (int)plVar10[1]) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *plVar10;
        uVar15 = 0;
        if ((int)uVar16 < (int)plVar12[1]) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar2 = *(double *)(lVar6 + lVar17 * 8);
        dVar3 = *(double *)(*plVar12 + lVar17 * 8);
        uVar15 = 0;
        if ((int)uVar16 < this->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar16 = uVar16 + 1;
        *(double *)((this->AllocatorInstance).Data + lVar17 * 8) = dVar9 * dVar3 + dVar8 * dVar2;
        lVar17 = lVar17 + 1;
        pTVar19 = local_a0.List.Object;
        param_3 = local_res18;
      } while (lVar17 < iVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (param_3 != &local_a0) {
    (((FGeometryScriptScalarList *)param_3)->List).Object = pTVar19;
    local_a0.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(((FGeometryScriptScalarList *)param_3)->List).SharedReferenceCount,
               &local_a0.List.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  return;
}

// execScalarBlendInPlace @ 14ced68f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarBlendInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FProperty *pFVar5;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FGeometryScriptScalarList *this_00;
  longlong lVar16;
  uint uVar17;
  double local_res10 [2];
  double local_res20;
  longlong *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FGeometryScriptScalarList local_78 [4];
  
  local_88 = (longlong *)0x0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78[0].List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_78[0].List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_res20 = 0.0;
  this_00 = local_78;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    this_00 = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar12 = pTStack_80;
  plVar11 = local_88;
  dVar10 = local_res20;
  dVar9 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_88 == (longlong *)0x0) ||
      ((this_00->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0)) ||
     (pTVar6 = (this_00->List).Object, (int)local_88[1] != pTVar6->ArrayNum)) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar4 = (int)local_88[1];
    if (((pTVar6 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
        (FGeometryScriptScalarList::Reset(this_00,0),
        (this_00->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this = (this_00->List).Object;
    if (this->ArrayNum != iVar4) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,iVar4,Default);
    }
    uVar15 = 0;
    if (0 < iVar4) {
      lVar16 = 0;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar15 < pTVar6->ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        uVar14 = 0;
        if ((int)uVar15 < (int)plVar11[1]) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar2 = *(double *)(pFVar7 + lVar16 * 8);
        dVar3 = *(double *)(*plVar11 + lVar16 * 8);
        uVar14 = 0;
        if ((int)uVar15 < this->ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar15 = uVar15 + 1;
        *(double *)((this->AllocatorInstance).Data + lVar16 * 8) = dVar10 * dVar3 + dVar9 * dVar2;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78[0].List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  return;
}

// execScalarInvert @ 14ced6c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarInvert
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  uint uVar19;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  uint uVar22;
  double local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> **local_res18;
  double local_res20;
  double local_c8;
  TArray<double,TSizedDefaultAllocator<32>_> *local_c0;
  FSharedReferencer<1> local_b8;
  longlong *local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  undefined8 local_a0;
  FSharedReferencer<1> local_98 [12];
  
  local_b0 = (longlong *)0x0;
  pTStack_a8 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_c8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar13 = pTStack_a8;
  plVar12 = local_b0;
  dVar11 = local_c8;
  dVar10 = local_res20;
  dVar9 = local_res10;
  pTVar20 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_a8->SharedReferenceCount = (atomic<int>)((int)pTStack_a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c0 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  if (local_b0 == (longlong *)0x0) {
    pTVar16 = pTVar20;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar3 = (int)local_b0[1];
    local_98[0].ReferenceController = ::operator_new(0x20);
    if (local_98[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_98[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar17 = (TArray<double,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
    }
    else {
      (local_98[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17 = (TArray<double,TSizedDefaultAllocator<32>_> *)(local_98[0].ReferenceController + 1);
      (local_98[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_98[0].ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_NV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_98[0].ReferenceController[1]._padding_ = 0;
      local_98[0].ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_98[0].ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar17 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      (local_98[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_98[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar14.ReferenceController = local_98[0].ReferenceController;
    local_a0 = 0;
    local_c0 = pTVar17;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_b8,local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    pTVar17 = local_c0;
    if ((local_c0 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar17->ArrayNum = 0;
    if (pTVar17->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar17->AllocatorInstance,0,&pTVar17->ArrayMax);
    }
    pTVar17 = local_c0;
    if ((local_c0 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pTVar17->ArrayNum != iVar3) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(pTVar17,iVar3,Default);
    }
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pTVar16 = pTVar17;
    if (0 < (longlong)iVar3) {
      lVar18 = 0;
      do {
        uVar19 = (uint)pTVar20;
        uVar21 = 0;
        if ((int)uVar19 < (int)plVar12[1]) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar2 = *(double *)(*plVar12 + lVar18 * 8);
        uVar21 = SUB84(dVar2,0) & uVar7;
        uVar22 = (uint)((ulonglong)dVar2 >> 0x20) & uVar8;
        dVar6 = dVar10;
        if (dVar9 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != dVar9) {
          dVar6 = dVar11 / dVar2;
        }
        uVar21 = 0;
        if ((int)uVar19 < pTVar17->ArrayNum) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar20 = (TArray<double,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar19 + 1);
        *(double *)((pTVar17->AllocatorInstance).Data + lVar18 * 8) = dVar6;
        lVar18 = lVar18 + 1;
        pTVar16 = local_c0;
      } while (lVar18 < iVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (local_res18 != &local_c0) {
    *local_res18 = pTVar16;
    local_c0 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(local_res18 + 1),&local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a8);
  return;
}

// execScalarInvertInPlace @ 14ced7100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarInvertInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EListOpResultCode EVar2;
  FGeometryScriptScalarList *pFVar3;
  double local_res10 [2];
  double local_res20;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  FGeometryScriptScalarList local_58;
  <lambda_1> local_48 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_58.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_78 = 0.0;
  pFVar3 = &local_58;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    pFVar3 = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_70 = local_res10[0];
  local_48[0].Epsilon = &local_70;
  local_60 = local_res20;
  local_48[0].Numerator = &local_68;
  local_68 = local_78;
  local_48[0].SetOnFailure = &local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptScalarList,FGeometryScriptScalarList,_UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace_::__l2::<lambda_1>_>
                    (pFVar3,pFVar3,local_48);
  if ((EVar2 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.List.SharedReferenceCount.ReferenceController);
  return;
}

// execScalarMultiply @ 14ced72d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarMultiply
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FProperty *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  longlong lVar18;
  double local_res10;
  FGeometryScriptScalarList *local_res18;
  longlong local_res20;
  FGeometryScriptScalarList local_88;
  longlong *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  longlong *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  
  local_68 = (longlong *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (longlong *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar12 = pTStack_60;
  plVar11 = local_68;
  pTVar10 = pTStack_70;
  plVar9 = local_78;
  dVar8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_88.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((local_68 == (longlong *)0x0) || (local_78 == (longlong *)0x0)) ||
     ((int)local_68[1] != (int)local_78[1])) {
    pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
  else {
    iVar4 = (int)local_68[1];
    FGeometryScriptScalarList::Reset(&local_88,0);
    this = local_88.List.Object;
    if ((local_88.List.Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (this->ArrayNum != iVar4) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,iVar4,Default);
    }
    uVar15 = 0;
    pTVar16 = this;
    local_res20 = (longlong)iVar4;
    if (0 < iVar4) {
      lVar18 = 0;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar15 < (int)plVar9[1]) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *plVar9;
        uVar14 = 0;
        if ((int)uVar15 < (int)plVar11[1]) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar2 = *(double *)(*plVar11 + lVar18 * 8);
        uVar14 = 0;
        if ((int)uVar15 < this->ArrayNum) {
          uVar14 = uVar17;
        }
        dVar3 = *(double *)(lVar6 + lVar18 * 8);
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = uVar15 + 1;
        *(double *)((this->AllocatorInstance).Data + lVar18 * 8) = dVar8 * dVar2 * dVar3;
        lVar18 = lVar18 + 1;
        pTVar16 = local_88.List.Object;
        param_3 = local_res18;
      } while (lVar18 < local_res20);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (param_3 != &local_88) {
    (((FGeometryScriptScalarList *)param_3)->List).Object = pTVar16;
    local_88.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(((FGeometryScriptScalarList *)param_3)->List).SharedReferenceCount,
               &local_88.List.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// execScalarMultiplyInPlace @ 14ced7660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarMultiplyInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FProperty *pFVar5;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  FGeometryScriptScalarList *this_00;
  double local_res10 [2];
  longlong local_res20;
  longlong *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  FGeometryScriptScalarList local_70 [3];
  
  local_80 = (longlong *)0x0;
  pTStack_78 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_70[0].List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_70[0].List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_res10[0] = 0.0;
  this_00 = local_70;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    this_00 = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar11 = pTStack_78;
  plVar10 = local_80;
  dVar9 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_78->SharedReferenceCount = (atomic<int>)((int)pTStack_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_80 == (longlong *)0x0) ||
      ((this_00->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0)) ||
     (pTVar6 = (this_00->List).Object, (int)local_80[1] != pTVar6->ArrayNum)) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar4 = (int)local_80[1];
    lVar15 = (longlong)iVar4;
    if (((pTVar6 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
        (FGeometryScriptScalarList::Reset(this_00,0),
        (this_00->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this = (this_00->List).Object;
    if (this->ArrayNum != iVar4) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,iVar4,Default);
    }
    uVar14 = 0;
    local_res20 = lVar15;
    if (0 < iVar4) {
      lVar16 = 0;
      do {
        uVar17 = ~uVar14 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar14 < pTVar6->ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        uVar13 = 0;
        if ((int)uVar14 < (int)plVar10[1]) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar2 = *(double *)(*plVar10 + lVar16 * 8);
        uVar13 = 0;
        if ((int)uVar14 < this->ArrayNum) {
          uVar13 = uVar17;
        }
        dVar3 = *(double *)(pFVar7 + lVar16 * 8);
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(double *)((this->AllocatorInstance).Data + lVar16 * 8) = dVar9 * dVar2 * dVar3;
        lVar16 = lVar16 + 1;
      } while (lVar16 < lVar15);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70[0].List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  return;
}

// execScalarVectorMultiply @ 14ced79b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarVectorMultiply
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  FProperty *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong *plVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  double local_res10;
  FGeometryScriptVectorList *local_res18;
  longlong local_res20;
  FGeometryScriptVectorList local_a0;
  longlong *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  longlong *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  
  local_80 = (longlong *)0x0;
  pTStack_78 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_90 = (longlong *)0x0;
  pTStack_88 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar16 = pTStack_78;
  plVar15 = local_80;
  pTVar14 = pTStack_88;
  plVar13 = local_90;
  dVar12 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_88->SharedReferenceCount = (atomic<int>)((int)pTStack_88->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_78->SharedReferenceCount = (atomic<int>)((int)pTStack_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((local_80 == (longlong *)0x0) || (local_90 == (longlong *)0x0)) ||
     ((int)local_80[1] != (int)local_90[1])) {
    pTVar20 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      pTVar20 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
  else {
    iVar4 = (int)local_80[1];
    FGeometryScriptVectorList::Reset(&local_a0,0);
    this = local_a0.List.Object;
    if ((local_a0.List.Object ==
         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (this->ArrayNum != iVar4) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (this,iVar4,Default);
    }
    uVar19 = 0;
    pTVar20 = this;
    if (0 < iVar4) {
      lVar23 = 0;
      lVar22 = 0;
      do {
        uVar21 = ~uVar19 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar19 < (int)plVar13[1]) {
          uVar18 = uVar21;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_res20 = *plVar13;
        uVar18 = 0;
        if ((int)uVar19 < (int)plVar15[1]) {
          uVar18 = uVar21;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar8 = dVar12 * *(double *)(*plVar15 + lVar23 * 8);
        pdVar2 = (double *)(lVar22 + 8 + local_res20);
        dVar11 = *pdVar2;
        dVar3 = *(double *)(lVar22 + local_res20);
        uVar18 = 0;
        if ((int)uVar19 < this->ArrayNum) {
          uVar18 = uVar21;
        }
        dVar10 = dVar8 * pdVar2[1];
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->AllocatorInstance).Data;
        uVar19 = uVar19 + 1;
        lVar23 = lVar23 + 1;
        *(double *)(pFVar6 + lVar22) = dVar8 * dVar3;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = dVar8 * dVar11;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(pFVar6 + lVar22 + 8) = auVar9;
        lVar22 = lVar22 + 0x18;
        pTVar20 = local_a0.List.Object;
        param_3 = local_res18;
      } while (lVar23 < iVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  if (param_3 != &local_a0) {
    (((FGeometryScriptVectorList *)param_3)->List).Object = pTVar20;
    local_a0.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(((FGeometryScriptVectorList *)param_3)->List).SharedReferenceCount,
               &local_a0.List.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  return;
}

// execScalarVectorMultiplyInPlace @ 14ced7d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execScalarVectorMultiplyInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  int iVar3;
  FProperty *pFVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1> *this_00;
  double local_res10 [2];
  longlong local_res20;
  longlong *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1> local_80 [4];
  
  local_90 = (longlong *)0x0;
  pTStack_88 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_80[0].Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_80[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  local_res10[0] = 0.0;
  this_00 = local_80;
  if ((TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1> *)
      param_2->MostRecentPropertyAddress !=
      (TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1> *)0x0) {
    this_00 = (TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1> *)
              param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar13 = pTStack_88;
  plVar12 = local_90;
  dVar11 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_88->SharedReferenceCount = (atomic<int>)((int)pTStack_88->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_90 == (longlong *)0x0) ||
      (this_00->Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)) ||
     ((int)local_90[1] != this_00->Object->ArrayNum)) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    pTVar16 = TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
              operator*<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>(this_00);
    iVar3 = (int)plVar12[1];
    if (((this_00->Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
        && (FGeometryScriptVectorList::Reset((FGeometryScriptVectorList *)this_00,0),
           this_00->Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this = this_00->Object;
    if (this->ArrayNum != iVar3) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (this,iVar3,Default);
    }
    uVar17 = 0;
    local_res20 = (longlong)iVar3;
    if (0 < iVar3) {
      lVar18 = 0;
      lVar19 = 0;
      do {
        uVar20 = ~uVar17 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar17 < pTVar16->ArrayNum) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar16->AllocatorInstance).Data;
        uVar15 = 0;
        if ((int)uVar17 < (int)plVar12[1]) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        dVar7 = dVar11 * *(double *)(*plVar12 + lVar18 * 8);
        uVar15 = 0;
        if ((int)uVar17 < this->ArrayNum) {
          uVar15 = uVar20;
        }
        dVar2 = *(double *)(pFVar5 + lVar19);
        pFVar5 = pFVar5 + lVar19 + 8;
        dVar10 = *(double *)pFVar5;
        dVar9 = dVar7 * *(double *)(pFVar5 + 8);
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->AllocatorInstance).Data;
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 1;
        *(double *)(pFVar5 + lVar19) = dVar7 * dVar2;
        auVar8._8_4_ = SUB84(dVar9,0);
        auVar8._0_8_ = dVar7 * dVar10;
        auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(pFVar5 + lVar19 + 8) = auVar8;
        lVar19 = lVar19 + 0x18;
      } while (lVar18 < local_res20);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80[0].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  return;
}

// execVectorBlend @ 14ced9e40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorBlend
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  FProperty *pFVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong *plVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar25;
  longlong lVar26;
  double local_res10;
  FGeometryScriptVectorList *local_res18;
  double local_res20;
  FGeometryScriptVectorList local_b8;
  longlong *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  
  local_98 = (longlong *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = (longlong *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pTVar19 = pTStack_90;
  plVar18 = local_98;
  pTVar17 = pTStack_a0;
  plVar16 = local_a8;
  dVar15 = local_res20;
  dVar14 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_b8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((local_98 == (longlong *)0x0) || (local_a8 == (longlong *)0x0)) ||
     ((int)local_98[1] != (int)local_a8[1])) {
    pTVar25 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      pTVar25 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
  else {
    iVar8 = (int)local_98[1];
    FGeometryScriptVectorList::Reset(&local_b8,0);
    this = local_b8.List.Object;
    if ((local_b8.List.Object ==
         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (this->ArrayNum != iVar8) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (this,iVar8,Default);
    }
    uVar23 = 0;
    pTVar25 = this;
    if (0 < iVar8) {
      lVar26 = 0;
      lVar24 = 0;
      do {
        uVar22 = ~uVar23 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar23 < (int)plVar16[1]) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar10 = *plVar16;
        uVar21 = 0;
        if ((int)uVar23 < (int)plVar18[1]) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        dVar2 = *(double *)(lVar24 + lVar10);
        lVar11 = *plVar18;
        dVar3 = *(double *)(lVar24 + 8 + lVar10);
        dVar4 = *(double *)(lVar24 + 0x10 + lVar10);
        dVar5 = *(double *)(lVar11 + lVar24);
        dVar6 = *(double *)(lVar11 + 8 + lVar24);
        dVar7 = *(double *)(lVar11 + 0x10 + lVar24);
        uVar21 = 0;
        if ((int)uVar23 < this->ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar12 = (this->AllocatorInstance).Data;
        uVar23 = uVar23 + 1;
        lVar26 = lVar26 + 1;
        *(double *)(pFVar12 + lVar24) = dVar15 * dVar5 + dVar14 * dVar2;
        *(double *)(pFVar12 + lVar24 + 8) = dVar14 * dVar3 + dVar15 * dVar6;
        *(double *)(pFVar12 + lVar24 + 0x10) = dVar14 * dVar4 + dVar15 * dVar7;
        lVar24 = lVar24 + 0x18;
        pTVar25 = local_b8.List.Object;
        param_3 = local_res18;
      } while (lVar26 < iVar8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  if (param_3 != &local_b8) {
    (((FGeometryScriptVectorList *)param_3)->List).Object = pTVar25;
    local_b8.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(((FGeometryScriptVectorList *)param_3)->List).SharedReferenceCount,
               &local_b8.List.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return;
}

// execVectorBlendInPlace @ 14ceda290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorBlendInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  FProperty *pFVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  FGeometryScriptVectorList *this_00;
  longlong lVar23;
  double local_res10 [2];
  double local_res20;
  longlong *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FGeometryScriptVectorList local_98 [6];
  
  local_a8 = (longlong *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98[0].List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_98[0].List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res20 = 0.0;
  this_00 = local_98;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this_00 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar9 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar9->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar9);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar17 = pTStack_a0;
  plVar16 = local_a8;
  dVar15 = local_res20;
  dVar14 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_a8 == (longlong *)0x0) ||
      ((this_00->List).Object ==
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)) ||
     (pTVar10 = (this_00->List).Object, (int)local_a8[1] != pTVar10->ArrayNum)) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar8 = (int)local_a8[1];
    if (((pTVar10 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
        (FGeometryScriptVectorList::Reset(this_00,0),
        (this_00->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    this = (this_00->List).Object;
    if (this->ArrayNum != iVar8) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (this,iVar8,Default);
    }
    uVar22 = 0;
    if (0 < iVar8) {
      lVar21 = 0;
      lVar23 = 0;
      do {
        uVar20 = ~uVar22 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar22 < pTVar10->ArrayNum) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar11 = (pTVar10->AllocatorInstance).Data;
        uVar19 = 0;
        if ((int)uVar22 < (int)plVar16[1]) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar12 = *plVar16;
        dVar2 = *(double *)(pFVar11 + lVar23);
        dVar3 = *(double *)(lVar12 + lVar23);
        dVar4 = *(double *)(pFVar11 + lVar23 + 8);
        dVar5 = *(double *)(pFVar11 + lVar23 + 0x10);
        dVar6 = *(double *)(lVar12 + 8 + lVar23);
        dVar7 = *(double *)(lVar12 + 0x10 + lVar23);
        uVar19 = 0;
        if ((int)uVar22 < this->ArrayNum) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar11 = (this->AllocatorInstance).Data;
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 1;
        *(double *)(pFVar11 + lVar23) = dVar15 * dVar3 + dVar14 * dVar2;
        *(double *)(pFVar11 + lVar23 + 8) = dVar14 * dVar4 + dVar15 * dVar6;
        *(double *)(pFVar11 + lVar23 + 0x10) = dVar14 * dVar5 + dVar15 * dVar7;
        lVar23 = lVar23 + 0x18;
      } while (lVar21 < iVar8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98[0].List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  return;
}

// execVectorCross @ 14ceda6b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorCross
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  FProperty *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong *plVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar26;
  FGeometryScriptVectorList local_a0;
  longlong *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  longlong *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  
  local_80 = (longlong *)0x0;
  pTStack_78 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar11 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar11->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar11);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_90 = (longlong *)0x0;
  pTStack_88 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar11 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar11->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar11);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pTVar19 = pTStack_78;
  plVar18 = local_80;
  pTVar17 = pTStack_88;
  plVar16 = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_88->SharedReferenceCount = (atomic<int>)((int)pTStack_88->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_78->SharedReferenceCount = (atomic<int>)((int)pTStack_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((local_80 == (longlong *)0x0) || (local_90 == (longlong *)0x0)) ||
     ((int)local_80[1] != (int)local_90[1])) {
    pTVar26 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      pTVar26 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
  else {
    iVar10 = (int)local_80[1];
    FGeometryScriptVectorList::Reset(&local_a0,0);
    this = local_a0.List.Object;
    if ((local_a0.List.Object ==
         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar20)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (this->ArrayNum != iVar10) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (this,iVar10,Default);
    }
    uVar25 = 0;
    pTVar26 = this;
    if (0 < iVar10) {
      lVar23 = 0;
      lVar24 = 0;
      do {
        uVar22 = ~uVar25 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar25 < (int)plVar16[1]) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar12 = *plVar16;
        uVar21 = 0;
        if ((int)uVar25 < (int)plVar18[1]) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar13 = *plVar18;
        dVar1 = *(double *)(lVar24 + 8 + lVar12);
        dVar2 = *(double *)(lVar24 + 0x10 + lVar12);
        dVar3 = *(double *)(lVar24 + lVar12);
        dVar4 = *(double *)(lVar13 + 8 + lVar24);
        dVar5 = *(double *)(lVar13 + 0x10 + lVar24);
        dVar6 = *(double *)(lVar13 + 0x10 + lVar24);
        dVar7 = *(double *)(lVar13 + lVar24);
        dVar8 = *(double *)(lVar13 + lVar24);
        dVar9 = *(double *)(lVar13 + 8 + lVar24);
        uVar21 = 0;
        if ((int)uVar25 < this->ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pFVar14 = (this->AllocatorInstance).Data;
        uVar25 = uVar25 + 1;
        lVar23 = lVar23 + 1;
        *(double *)(pFVar14 + lVar24) = dVar2 * dVar4 - dVar1 * dVar5;
        *(double *)(pFVar14 + lVar24 + 8) = dVar3 * dVar6 - dVar2 * dVar7;
        *(double *)(pFVar14 + lVar24 + 0x10) = dVar1 * dVar8 - dVar3 * dVar9;
        lVar24 = lVar24 + 0x18;
        pTVar26 = local_a0.List.Object;
      } while (lVar23 < iVar10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  if (param_3 != &local_a0) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 = pTVar26;
    local_a0.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_a0.List.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  return;
}

// execVectorDot @ 14cedaa90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorDot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  FProperty *pFVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong *plVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar22;
  FGeometryScriptScalarList local_80;
  longlong *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  longlong *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  local_60 = (longlong *)0x0;
  pTStack_58 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar8 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar8->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar8);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_70 = (longlong *)0x0;
  pTStack_68 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar8 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar8->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar8);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar15 = pTStack_58;
  plVar14 = local_60;
  pTVar13 = pTStack_68;
  plVar12 = local_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_68->SharedReferenceCount = (atomic<int>)((int)pTStack_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_58->SharedReferenceCount = (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_80.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((local_60 == (longlong *)0x0) || (local_70 == (longlong *)0x0)) ||
     ((int)local_60[1] != (int)local_70[1])) {
    pTVar22 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      pTVar22 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
  else {
    iVar7 = (int)local_60[1];
    FGeometryScriptScalarList::Reset(&local_80,0);
    this = local_80.List.Object;
    if ((local_80.List.Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (this->ArrayNum != iVar7) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,iVar7,Default);
    }
    uVar21 = 0;
    pTVar22 = this;
    if (0 < iVar7) {
      lVar20 = 0;
      lVar19 = 0;
      do {
        uVar18 = ~uVar21 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar21 < (int)plVar12[1]) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *plVar12;
        uVar17 = 0;
        if ((int)uVar21 < (int)plVar14[1]) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar10 = *plVar14;
        dVar1 = *(double *)(lVar9 + 8 + lVar19);
        dVar2 = *(double *)(lVar9 + 0x10 + lVar19);
        dVar3 = *(double *)(lVar10 + 8 + lVar19);
        dVar4 = *(double *)(lVar10 + lVar19);
        dVar5 = *(double *)(lVar10 + 0x10 + lVar19);
        dVar6 = *(double *)(lVar9 + lVar19);
        uVar17 = 0;
        if ((int)uVar21 < this->ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar21 = uVar21 + 1;
        lVar19 = lVar19 + 0x18;
        *(double *)((this->AllocatorInstance).Data + lVar20 * 8) =
             dVar1 * dVar3 + dVar4 * dVar6 + dVar2 * dVar5;
        lVar20 = lVar20 + 1;
        pTVar22 = local_80.List.Object;
      } while (lVar20 < iVar7);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (param_3 != &local_80) {
    *(TArray<double,TSizedDefaultAllocator<32>_> **)param_3 = pTVar22;
    local_80.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_80.List.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  return;
}

// execVectorInverseTransformInPlace @ 14cedae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorInverseTransformInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptVectorList *pFVar2;
  undefined1 auStack_118 [32];
  int local_f8 [2];
  FGeometryScriptVectorList local_f0;
  TTransform<double> local_d8;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_f0.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_f0.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  pFVar2 = &local_f0;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    pFVar2 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_28._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_28._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_f8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_d8.Rotation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_d8.Rotation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_d8.Rotation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_d8.Rotation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_d8.Translation.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_d8.Translation.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_d8.Translation.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_d8.Translation.ZW.m128d_f64[1] = (double)local_48._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)local_38._0_8_;
  local_d8.Scale3D.XY.m128d_f64[1] = (double)local_38._8_8_;
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)local_28._0_8_;
  local_d8.Scale3D.ZW.m128d_f64[1] = (double)local_28._8_8_;
  VectorInverseTransformInPlace(pFVar2,&local_d8,local_f8[0] != 0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.List.SharedReferenceCount.ReferenceController);
  return;
}

// execVectorLength @ 14cedb000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FProperty *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  uint uVar12;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  undefined1 unaff_XMM6 [16];
  TArray<double,TSizedDefaultAllocator<32>_> *local_78;
  FSharedReferencer<1> local_70;
  longlong *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  
  local_68 = (longlong *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar9 = pTStack_60;
  plVar8 = local_68;
  pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_68 == (longlong *)0x0) {
    pTVar17 = pTVar16;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar3 = (int)local_68[1];
    local_50.ReferenceController = ::operator_new(0x20);
    if (local_50.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar13 = (TArray<double,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
    }
    else {
      (local_50.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13 = (TArray<double,TSizedDefaultAllocator<32>_> *)(local_50.ReferenceController + 1);
      (local_50.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_50.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_NV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_50.ReferenceController[1]._padding_ = 0;
      local_50.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_50.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar13 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar10.ReferenceController = local_50.ReferenceController;
    local_58 = 0;
    local_78 = pTVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    pTVar13 = local_78;
    if ((local_78 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar13->ArrayNum = 0;
    if (pTVar13->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar13->AllocatorInstance,0,&pTVar13->ArrayMax);
    }
    pTVar13 = local_78;
    if ((local_78 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar13->ArrayNum != iVar3) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(pTVar13,iVar3,Default);
    }
    pTVar17 = pTVar13;
    if (0 < iVar3) {
      lVar14 = 0;
      lVar18 = 0;
      do {
        uVar15 = (uint)pTVar16;
        uVar12 = 0;
        if ((int)uVar15 < (int)plVar8[1]) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *plVar8;
        dVar1 = *(double *)(lVar18 + 8 + lVar5);
        dVar2 = *(double *)(lVar18 + 0x10 + lVar5);
        uVar12 = 0;
        if ((int)uVar15 < pTVar13->ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar1 * dVar1 + *(double *)(lVar18 + lVar5) * *(double *)(lVar18 + lVar5) +
                       dVar2 * dVar2;
        unaff_XMM6 = sqrtpd(unaff_XMM6,auVar7);
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar15 + 1);
        lVar18 = lVar18 + 0x18;
        *(longlong *)((pTVar13->AllocatorInstance).Data + lVar14 * 8) = unaff_XMM6._0_8_;
        lVar14 = lVar14 + 1;
        pTVar17 = local_78;
      } while (lVar14 < iVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (param_3 != &local_78) {
    *(TArray<double,TSizedDefaultAllocator<32>_> **)param_3 = pTVar17;
    local_78 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// execVectorNormalizeInPlace @ 14cedb3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorNormalizeInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EListOpResultCode EVar2;
  FGeometryScriptVectorList *pFVar3;
  FGeometryScriptVectorList local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_58.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_58.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar3 = &local_58;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    pFVar3 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_20 = uStack_40;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = VectorMathFunctionsLocal::
          UnaryListToListOp<FGeometryScriptVectorList,FGeometryScriptVectorList,_UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace_::__l2::<lambda_1>_>
                    (pFVar3,pFVar3,(TVector<double> *)&local_28);
  if ((EVar2 == DifferentSizes) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.List.SharedReferenceCount.ReferenceController);
  return;
}

// execVectorPlaneProjectInPlace @ 14cedb4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorPlaneProjectInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  double *pdVar5;
  uchar *puVar6;
  double dVar7;
  undefined1 local_res10 [8];
  uchar local_a8 [8];
  TReferenceControllerBase<1> *pTStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar6 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_98 = local_78;
  dStack_90 = dStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar4 = *(undefined8 **)puVar6;
  local_88 = local_68;
  dStack_80 = dStack_60;
  if (puVar4 == (undefined8 *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar2 = *(int *)(puVar4 + 1);
    pdVar5 = (double *)*puVar4;
    pdVar1 = pdVar5 + (longlong)iVar2 * 3;
    while( true ) {
      if (*(int *)(puVar4 + 1) != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pdVar5 == pdVar1) break;
      dVar7 = (pdVar5[1] * dStack_70 + *pdVar5 * local_78 + pdVar5[2] * local_68) - dStack_60;
      *pdVar5 = *pdVar5 - dVar7 * local_78;
      pdVar5[1] = pdVar5[1] - dVar7 * dStack_70;
      pdVar5[2] = pdVar5[2] - dVar7 * local_68;
      pdVar5 = pdVar5 + 3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  return;
}

// execVectorToScalar @ 14cedb6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorToScalar
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FProperty *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  uint uVar15;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  uint uVar18;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar20;
  longlong lVar21;
  double local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> **local_res18;
  double local_res20;
  double local_b8;
  TReferenceControllerBase<1> *local_b0;
  TArray<double,TSizedDefaultAllocator<32>_> *local_a8;
  FSharedReferencer<1> local_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80 [9];
  
  local_98 = (longlong *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_b8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar12 = local_98;
  dVar11 = local_b8;
  dVar10 = local_res20;
  dVar9 = local_res10;
  pTVar19 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b0 = pTStack_90;
  if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_98 == (longlong *)0x0) {
    pTVar20 = pTVar19;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    iVar5 = (int)local_98[1];
    local_80[0].ReferenceController = ::operator_new(0x20);
    if (local_80[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_80[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
    }
    else {
      (local_80[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16 = (TArray<double,TSizedDefaultAllocator<32>_> *)(local_80[0].ReferenceController + 1);
      (local_80[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_80[0].ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_NV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_80[0].ReferenceController[1]._padding_ = 0;
      local_80[0].ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_80[0].ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar16 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      LOCK();
      (local_80[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_80[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar13.ReferenceController = local_80[0].ReferenceController;
    local_88 = 0;
    local_a8 = pTVar16;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a0,local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
    pTVar16 = local_a8;
    if ((local_a8 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar16->ArrayNum = 0;
    if (pTVar16->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar16->AllocatorInstance,0,&pTVar16->ArrayMax);
    }
    pTVar16 = local_a8;
    if ((local_a8 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar16->ArrayNum != iVar5) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(pTVar16,iVar5,Default);
    }
    pTVar20 = pTVar16;
    if (0 < iVar5) {
      lVar17 = 0;
      lVar21 = 0;
      do {
        uVar18 = (uint)pTVar19;
        uVar15 = 0;
        if ((int)uVar18 < (int)plVar12[1]) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *plVar12;
        dVar2 = *(double *)(lVar7 + 8 + lVar21);
        dVar3 = *(double *)(lVar7 + lVar21);
        dVar4 = *(double *)(lVar7 + 0x10 + lVar21);
        uVar15 = 0;
        if ((int)uVar18 < pTVar16->ArrayNum) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar19 = (TArray<double,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar18 + 1);
        lVar21 = lVar21 + 0x18;
        *(double *)((pTVar16->AllocatorInstance).Data + lVar17 * 8) =
             dVar10 * dVar2 + dVar11 * dVar3 + dVar9 * dVar4;
        lVar17 = lVar17 + 1;
        pTVar20 = local_a8;
      } while (lVar17 < iVar5);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  if (local_res18 != &local_a8) {
    *local_res18 = pTVar20;
    local_a8 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(local_res18 + 1),&local_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return;
}

// execVectorTransformInPlace @ 14cedbb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_VectorMathFunctions::execVectorTransformInPlace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptVectorList *pFVar2;
  undefined1 auStack_118 [32];
  int local_f8 [2];
  FGeometryScriptVectorList local_f0;
  TTransform<double> local_d8;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_f0.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_f0.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  pFVar2 = &local_f0;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    pFVar2 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_28._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_28._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_f8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_d8.Rotation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_d8.Rotation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_d8.Rotation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_d8.Rotation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_d8.Translation.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_d8.Translation.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_d8.Translation.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_d8.Translation.ZW.m128d_f64[1] = (double)local_48._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)local_38._0_8_;
  local_d8.Scale3D.XY.m128d_f64[1] = (double)local_38._8_8_;
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)local_28._0_8_;
  local_d8.Scale3D.ZW.m128d_f64[1] = (double)local_28._8_8_;
  VectorTransformInPlace(pFVar2,&local_d8,local_f8[0] != 0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.List.SharedReferenceCount.ReferenceController);
  return;
}

