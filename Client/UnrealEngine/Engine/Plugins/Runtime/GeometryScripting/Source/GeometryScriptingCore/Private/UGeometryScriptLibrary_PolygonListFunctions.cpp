// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 54

// StaticClass @ 14cea3190

UClass * __cdecl UGeometryScriptLibrary_PolygonListFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_PolygonListFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_PolygonListFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_PolygonListFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_PolygonListFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_PolygonListFunctions @ 14ceae7b0

UGeometryScriptLibrary_PolygonListFunctions * __thiscall
UGeometryScriptLibrary_PolygonListFunctions::UGeometryScriptLibrary_PolygonListFunctions
          (UGeometryScriptLibrary_PolygonListFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_PolygonListFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_PolygonListFunctions @ 14ceae7e0

UGeometryScriptLibrary_PolygonListFunctions * __thiscall
UGeometryScriptLibrary_PolygonListFunctions::UGeometryScriptLibrary_PolygonListFunctions
          (UGeometryScriptLibrary_PolygonListFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_PolygonListFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_PolygonListFunctions @ 14ceaeb90

void __thiscall
UGeometryScriptLibrary_PolygonListFunctions::~UGeometryScriptLibrary_PolygonListFunctions
          (UGeometryScriptLibrary_PolygonListFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_PolygonListFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddPolygonToList @ 14ceb3ca0

int __cdecl
UGeometryScriptLibrary_PolygonListFunctions::AddPolygonToList
          (FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptSimplePolygon *param_2,
          TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  void *_Src;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  FGeometryScriptSimplePolygon *local_res10;
  TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *local_res18;
  char local_res20;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  TPolygon2<double> local_a0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_90;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_80;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_70 [3];
  
  pTVar14 = (param_1->Polygons).Object;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (pTVar14 == (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    FGeometryScriptGeneralPolygonList::Reset(param_1,0);
    pTVar14 = (param_1->Polygons).Object;
  }
  pTVar3 = (param_2->Vertices).Object;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  pTVar18 = &local_90;
  if (pTVar3 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar18 = pTVar3;
  }
  if ((pTVar14 == (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  pTVar14 = (param_1->Polygons).Object;
  iVar11 = pTVar14->ArrayNum;
  if ((pTVar14 == (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  pTVar14 = (param_1->Polygons).Object;
  iVar12 = pTVar14->ArrayNum;
  if (iVar12 == pTVar14->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
  }
  local_b0.Data = (FScriptContainerElement *)0x0;
  pTVar14->ArrayNum = iVar12 + 1;
  local_a8 = pTVar18->ArrayNum;
  lVar17 = (longlong)local_a8;
  pFVar20 = (pTVar18->AllocatorInstance).Data;
  pFVar1 = (pTVar14->AllocatorInstance).Data + (longlong)iVar12 * 0x28;
  if (local_a8 == 0) {
    local_a4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_a8,0,&local_b0,local_a8,&local_a4);
    memcpy(local_b0.Data,pFVar20,lVar17 << 4);
  }
  iVar12 = local_a8;
  FVar16.Data = local_b0.Data;
  *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + 8) = local_a8;
  if (local_a8 == 0) {
    *(int *)(pFVar1 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_a8,0,(ForAnyElementType *)pFVar1,local_a8,(int *)(pFVar1 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar1,FVar16.Data,(longlong)iVar12 << 4);
  }
  iVar12 = local_a8;
  *(FScriptContainerElement **)(pFVar1 + 0x18) = (FScriptContainerElement *)0x0;
  *(FScriptContainerElement **)(pFVar1 + 0x20) = (FScriptContainerElement *)0x0;
  local_80.DataPtr = (TVector2<double> *)local_b0.Data;
  if ((local_a8 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  local_80.ArrayNum = iVar12;
  dVar6 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(&local_80);
  pFVar1[0x10] = (FScriptContainerElement)(dVar6 < 0.0);
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  uVar2 = local_res18->ArrayNum;
  uVar13 = (ulonglong)(int)uVar2;
  pFVar20 = (local_res18->AllocatorInstance).Data;
  pFVar19 = pFVar20 + uVar13 * 0x10;
  do {
    if (local_res18->ArrayNum != (int)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGeometryScriptSimplePolygon_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar20 == pFVar19) {
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((local_res10->Vertices).SharedReferenceCount.ReferenceController);
      return iVar11;
    }
    puVar4 = *(undefined8 **)pFVar20;
    if (puVar4 != (undefined8 *)0x0) {
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = *(int *)(puVar4 + 1);
      lVar17 = (longlong)local_b8;
      _Src = (void *)*puVar4;
      if (local_b8 == 0) {
        local_b4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_b8,0,&local_c0,local_b8,&local_b4);
        memcpy(local_c0.Data,_Src,lVar17 << 4);
      }
      iVar12 = local_b8;
      if (local_res20 != '\0') {
        local_70[0].DataPtr = (TVector2<double> *)local_c0.Data;
        if ((local_b8 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        local_70[0].ArrayNum = iVar12;
        dVar6 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(local_70);
        if (((FScriptContainerElement)(dVar6 < 0.0) == pFVar1[0x10]) &&
           (lVar17 = (longlong)(local_b8 / 2), 0 < local_b8 / 2)) {
          pFVar15 = local_c0.Data + (longlong)(local_b8 + -1) * 0x10;
          FVar16.Data = local_c0.Data;
          do {
            uVar7 = *(undefined8 *)(pFVar15 + 8);
            uVar8 = *(undefined8 *)FVar16.Data;
            uVar9 = *(undefined8 *)(FVar16.Data + 8);
            *(undefined8 *)FVar16.Data = *(undefined8 *)pFVar15;
            *(undefined8 *)(FVar16.Data + 8) = uVar7;
            FVar16.Data = FVar16.Data + 0x10;
            *(undefined8 *)pFVar15 = uVar8;
            *(undefined8 *)(pFVar15 + 8) = uVar9;
            lVar17 = lVar17 + -1;
            pFVar15 = pFVar15 + -0x10;
          } while (lVar17 != 0);
        }
      }
      iVar12 = local_b8;
      FVar16.Data = local_c0.Data;
      local_a0.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Vertices.ArrayNum = local_b8;
      if (local_b8 == 0) {
        local_a0.Vertices.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_b8,0,(ForAnyElementType *)&local_a0,local_b8,
                   &local_a0.Vertices.ArrayMax);
        memcpy(local_a0.Vertices.AllocatorInstance.Data,FVar16.Data,(longlong)iVar12 << 4);
      }
                    /* WARNING: Load size is inaccurate */
      if (((pFVar1[0x18] <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 <
           pFVar1[0x18] + (longlong)*(int *)(pFVar1 + 0x24) * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      iVar12 = *(int *)(pFVar1 + 0x20);
      if (iVar12 == *(int *)(pFVar1 + 0x24)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(pFVar1 + 0x18),(int *)(pFVar1 + 0x24));
      }
      *(int *)(pFVar1 + 0x20) = iVar12 + 1;
                    /* WARNING: Load size is inaccurate */
      UE::Geometry::TPolygon2<double>::TPolygon2<double>
                ((TPolygon2<double> *)(pFVar1[0x18] + (longlong)iVar12 * 0x10),&local_a0);
      if (local_a0.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Vertices.AllocatorInstance.Data);
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
    }
    uVar13 = (ulonglong)uVar2;
    pFVar20 = pFVar20 + 0x10;
  } while( true );
}

// AppendPolygonList @ 14ceb4230

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::AppendPolygonList
          (FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptGeneralPolygonList *param_2)

{
  int iVar1;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptGeneralPolygonList::Reset(param_1,0);
  }
  if ((param_2->Polygons).Object !=
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (((param_1->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2 = (param_1->Polygons).Object;
    if (((param_2->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = (param_2->Polygons).Object;
    if ((pTVar2 == pTVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = pTVar3->ArrayNum;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,iVar1,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax
                        );
      ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28,
                 (TGeneralPolygon2<double> *)(pTVar3->AllocatorInstance).Data,iVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->Polygons).SharedReferenceCount.ReferenceController);
  return;
}

// CreatePolygonListFromSimplePolygons @ 14ceb7910

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSimplePolygons
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  void *_Src;
  code *pcVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FGeometryScriptGeneralPolygonList *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_58 [2];
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  local_res10 = param_1->ArrayNum;
  uVar7 = (ulonglong)(int)local_res10;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar9 + uVar7 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGeometryScriptSimplePolygon_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar11) break;
    if (*(longlong *)pFVar9 != 0) {
      if ((__return_storage_ptr__->Polygons).Object ==
          (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar4)();
          return pFVar8;
        }
      }
      pTVar2 = (__return_storage_ptr__->Polygons).Object;
      puVar3 = *(undefined8 **)pFVar9;
      iVar6 = pTVar2->ArrayNum;
      if (iVar6 == pTVar2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      pTVar2->ArrayNum = iVar6 + 1;
      local_60 = *(int *)(puVar3 + 1);
      lVar10 = (longlong)local_60;
      _Src = (void *)*puVar3;
      local_68.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_60,0,&local_68,local_60,&local_5c);
        memcpy(local_68.Data,_Src,lVar10 << 4);
      }
      iVar6 = local_60;
      _Src_00.Data = local_68.Data;
      *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + 8) = local_60;
      if (local_60 == 0) {
        *(int *)(pFVar1 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_60,0,(ForAnyElementType *)pFVar1,local_60,(int *)(pFVar1 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar1,_Src_00.Data,(longlong)iVar6 << 4);
      }
      iVar6 = local_60;
      *(FScriptContainerElement **)(pFVar1 + 0x18) = (FScriptContainerElement *)0x0;
      *(FScriptContainerElement **)(pFVar1 + 0x20) = (FScriptContainerElement *)0x0;
      local_58[0].DataPtr = (TVector2<double> *)local_68.Data;
      if (local_60 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar4)();
          return pFVar8;
        }
      }
      local_58[0].ArrayNum = iVar6;
      dVar12 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(local_58);
      pFVar1[0x10] = (FScriptContainerElement)(dVar12 < 0.0);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    uVar7 = (ulonglong)local_res10;
    pFVar9 = pFVar9 + 0x10;
  }
  return __return_storage_ptr__;
}

// CreatePolygonListFromSinglePolygon @ 14ceb7b70

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSinglePolygon
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptSimplePolygon *param_1,
          TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FGeometryScriptSimplePolygon local_18;
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  local_18.Vertices.Object = (param_1->Vertices).Object;
  local_18.Vertices.SharedReferenceCount.ReferenceController =
       (param_1->Vertices).SharedReferenceCount.ReferenceController;
  if (local_18.Vertices.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.Vertices.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.Vertices.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  AddPolygonToList(__return_storage_ptr__,&local_18,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreatePolygonsFromOpenPolyPathsOffset @ 14ceb7c00

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromOpenPolyPathsOffset
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          TArray<FGeometryScriptPolyPath,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptOpenPathOffsetOptions *param_2,double param_3,bool *param_4,bool param_5)

{
  undefined8 *puVar1;
  EGeometryScriptPathOffsetEndType EVar2;
  EGeometryScriptPolyOffsetJoinType EVar3;
  longlong *plVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FGeometryScriptGeneralPolygonList *pFVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_118;
  uint local_110;
  uint local_10c;
  int local_108 [2];
  TPolygon2<double> local_100;
  ForAnyElementType local_f0;
  int local_e8;
  int aiStack_e4 [3];
  TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double> local_d8;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  EVar2 = param_2->EndType;
  uVar20 = 0;
  local_d8.Polygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Polygons.ArrayNum = 0;
  local_d8.Polygons.ArrayMax = 0;
  local_d8.Result.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Result.ArrayNum = 0;
  local_d8.Result.ArrayMax = 0;
  if (EVar2 == Butt) {
    local_d8.EndType = Butt;
  }
  else {
    if (EVar2 != Square) {
      if (EVar2 == Round) {
        local_d8.EndType = Round;
        goto LAB_14ceb7c81;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                         ,0x204,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
        return pFVar12;
      }
    }
    local_d8.EndType = Square;
  }
LAB_14ceb7c81:
  EVar3 = param_2->JoinType;
  if (EVar3 != Square) {
    if (EVar3 == Round) {
      local_d8.JoinType = Round;
      goto LAB_14ceb7cc9;
    }
    if (EVar3 == Miter) {
      local_d8.JoinType = Miter;
      goto LAB_14ceb7cc9;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                       ,0x1f2,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
      return pFVar12;
    }
  }
  local_d8.JoinType = Square;
LAB_14ceb7cc9:
  local_d8.MiterLimit = param_2->MiterLimit;
  uVar9 = param_1->ArrayNum;
  local_d8.MaxStepsPerRadian = param_2->MaximumStepsPerRadian;
  local_d8.DefaultStepsPerRadianScale = param_2->StepsPerRadianScale;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  aiStack_e4[0] = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_10c = 0;
  local_d8.Offset = param_3;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  uVar16 = uVar20;
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&local_118,0,(int *)&local_10c);
    uVar16 = (ulonglong)local_110;
  }
  iVar15 = param_1->ArrayNum;
  uVar9 = 0;
  uVar19 = uVar20;
  uVar24 = uVar20;
  if (0 < iVar15) {
    do {
      uVar18 = (uint)uVar19;
      uVar10 = 0;
      if ((int)uVar18 < iVar15) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
          return pFVar12;
        }
        uVar16 = (ulonglong)local_110;
      }
      pFVar22 = (param_1->AllocatorInstance).Data;
      lVar14 = *(longlong *)(pFVar22 + uVar24);
      if ((lVar14 != 0) && (*(int *)(lVar14 + 8) != 0)) {
        local_108[0] = *(int *)(lVar14 + 8);
        uVar19 = uVar20;
        uVar23 = uVar20;
        uVar10 = (uint)uVar16;
        if (0 < local_108[0]) {
          do {
            if ((*(longlong *)(pFVar22 + uVar24) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
              return pFVar12;
            }
            plVar4 = *(longlong **)(pFVar22 + uVar24);
            uVar17 = (uint)uVar19;
            uVar10 = uVar9;
            if ((int)uVar17 < (int)plVar4[1]) {
              uVar10 = ~uVar17 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
              return pFVar12;
            }
            lVar14 = *plVar4;
            if (local_e8 == aiStack_e4[0]) {
              local_e8 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_f0,aiStack_e4);
            }
            lVar13 = (longlong)local_e8;
            local_e8 = local_e8 + 1;
            uVar5 = *(undefined8 *)(uVar23 + lVar14);
            *(undefined8 *)(local_f0.Data + lVar13 * 0x10 + 8) =
                 *(undefined8 *)(uVar23 + 8 + lVar14);
            *(undefined8 *)(local_f0.Data + lVar13 * 0x10) = uVar5;
            uVar19 = (ulonglong)(uVar17 + 1);
            uVar23 = uVar23 + 0x18;
            uVar10 = local_110;
          } while ((int)(uVar17 + 1) < local_108[0]);
        }
        if (((local_118.Data <= (FScriptContainerElement *)local_108) &&
            ((FScriptContainerElement *)local_108 < local_118.Data + (longlong)(int)local_10c * 4))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), uVar10 = local_110, bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
          return pFVar12;
        }
        if (uVar10 == local_10c) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_118,(int *)&local_10c);
        }
        local_110 = uVar10 + 1;
        *(int *)(local_118.Data + (longlong)(int)uVar10 * 4) = local_108[0];
        uVar16 = (ulonglong)local_110;
      }
      iVar15 = param_1->ArrayNum;
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar24 = uVar24 + 0x18;
    } while ((int)(uVar18 + 1) < iVar15);
  }
  iVar15 = (int)uVar16;
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar16);
  }
  if (local_d8.Polygons.ArrayMax < iVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar15,(ForAnyElementType *)&local_d8,local_d8.Polygons.ArrayNum,
               &local_d8.Polygons.ArrayMax);
    uVar16 = (ulonglong)local_110;
  }
  uVar19 = uVar20;
  uVar24 = uVar20;
  if (0 < (int)uVar16) {
    do {
      uVar18 = (uint)uVar20;
      uVar10 = uVar9;
      if ((int)uVar18 < (int)uVar16) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
        return pFVar12;
      }
      iStack_78 = *(int *)(local_118.Data + uVar24 * 4);
      local_80 = local_f0.Data + (longlong)(int)uVar19 * 0x10;
      if ((iStack_78 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
        return pFVar12;
      }
      if (((local_d8.Polygons.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 <
           local_d8.Polygons.AllocatorInstance.Data + (longlong)local_d8.Polygons.ArrayMax * 0x10))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
        return pFVar12;
      }
      if (local_d8.Polygons.ArrayNum == local_d8.Polygons.ArrayMax) {
        local_d8.Polygons.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)&local_d8,&local_d8.Polygons.ArrayMax);
      }
      lVar14 = (longlong)local_d8.Polygons.ArrayNum;
      local_d8.Polygons.ArrayNum = local_d8.Polygons.ArrayNum + 1;
      *(FScriptContainerElement **)(local_d8.Polygons.AllocatorInstance.Data + lVar14 * 0x10) =
           local_80;
      *(longlong *)(local_d8.Polygons.AllocatorInstance.Data + lVar14 * 0x10 + 8) =
           CONCAT44(uStack_74,iStack_78);
      uVar16 = (ulonglong)(int)local_110;
      uVar10 = uVar9;
      if ((int)uVar18 < (int)local_110) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
          return pFVar12;
        }
        uVar16 = (ulonglong)local_110;
      }
      uVar20 = (ulonglong)(uVar18 + 1);
      uVar19 = (ulonglong)(uint)((int)uVar19 + *(int *)(local_118.Data + uVar24 * 4));
      uVar24 = uVar24 + 1;
    } while ((int)(uVar18 + 1) < (int)uVar16);
  }
  bVar8 = UE::Geometry::TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double>::
          ComputeResult(&local_d8);
  *param_4 = bVar8;
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  if ((*param_4 == false) && (param_5)) {
    iVar15 = param_1->ArrayNum;
    pFVar25 = (param_1->AllocatorInstance).Data;
    pFVar22 = pFVar25 + (longlong)iVar15 * 0x18;
    local_88 = pFVar22;
    while( true ) {
      if (param_1->ArrayNum != iVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FGeometryScriptPolyPath,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar25 == pFVar22) break;
      if (*(longlong *)pFVar25 != 0) {
        if (((__return_storage_ptr__->Polygons).Object ==
             (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
          return pFVar12;
        }
        pTVar6 = (__return_storage_ptr__->Polygons).Object;
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
          return pFVar12;
        }
        plVar4 = *(longlong **)pFVar25;
        local_100.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.Vertices.ArrayNum = 0;
        local_100.Vertices.ArrayMax = 0;
        uVar9 = *(uint *)(plVar4 + 1);
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        if (0 < (int)uVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar9,(ForAnyElementType *)&local_100,0,&local_100.Vertices.ArrayMax);
        }
        lVar14 = plVar4[1];
        puVar21 = (undefined8 *)*plVar4;
        puVar1 = puVar21 + (longlong)(int)lVar14 * 3;
        while( true ) {
          if ((int)plVar4[1] != (int)lVar14) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (puVar21 == puVar1) break;
          local_70 = *puVar21;
          uStack_68 = puVar21[1];
          if (((local_100.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_70)
              && ((FScriptContainerElement *)&local_70 <
                  local_100.Vertices.AllocatorInstance.Data +
                  (longlong)local_100.Vertices.ArrayMax * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
            return pFVar12;
          }
          iVar11 = local_100.Vertices.ArrayNum;
          if (local_100.Vertices.ArrayNum == local_100.Vertices.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)&local_100,&local_100.Vertices.ArrayMax);
          }
          local_100.Vertices.ArrayNum = iVar11 + 1;
          puVar21 = puVar21 + 3;
          *(undefined8 *)(local_100.Vertices.AllocatorInstance.Data + (longlong)iVar11 * 0x10) =
               local_70;
          *(undefined8 *)(local_100.Vertices.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
               uStack_68;
        }
        iVar11 = pTVar6->ArrayNum;
        if (iVar11 == pTVar6->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        pTVar6->ArrayNum = iVar11 + 1;
        UE::Geometry::TGeneralPolygon2<double>::TGeneralPolygon2<double>
                  ((TGeneralPolygon2<double> *)
                   ((pTVar6->AllocatorInstance).Data + (longlong)iVar11 * 0x28),&local_100);
        pFVar22 = local_88;
        if (local_100.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Vertices.AllocatorInstance.Data);
          pFVar22 = local_88;
        }
      }
      pFVar25 = pFVar25 + 0x18;
    }
  }
  else {
    if (((__return_storage_ptr__->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FGeometryScriptGeneralPolygonList *)(*pcVar7)();
      return pFVar12;
    }
    pTVar6 = (__return_storage_ptr__->Polygons).Object;
    if (pTVar6 != &local_d8.Result) {
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                ((TGeneralPolygon2<double> *)(pTVar6->AllocatorInstance).Data,pTVar6->ArrayNum);
      pFVar22 = (pTVar6->AllocatorInstance).Data;
      if (pFVar22 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar22);
      }
      (pTVar6->AllocatorInstance).Data = local_d8.Result.AllocatorInstance.Data;
      local_d8.Result.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar6->ArrayNum = local_d8.Result.ArrayNum;
      pTVar6->ArrayMax = local_d8.Result.ArrayMax;
      local_d8.Result.ArrayNum = 0;
      local_d8.Result.ArrayMax = 0;
    }
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_d8.Result.AllocatorInstance.Data,
             local_d8.Result.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_d8.Result.AllocatorInstance.Data !=
      (TGeneralPolygon2<double> *)0x0) {
    FMemory::Free(local_d8.Result.AllocatorInstance.Data);
  }
  if (local_d8.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Polygons.AllocatorInstance.Data);
  }
  DestructItems<FGeometryScriptPolyPath,int>
            ((FGeometryScriptPolyPath *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar22 = (param_1->AllocatorInstance).Data;
  if (pFVar22 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar22);
  }
  return __return_storage_ptr__;
}

// CreatePolygonsFromPathOffset @ 14ceb8520

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromPathOffset
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptOpenPathOffsetOptions *param_2,double param_3,bool *param_4,bool param_5)

{
  EGeometryScriptPathOffsetEndType EVar1;
  EGeometryScriptPolyOffsetJoinType EVar2;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FGeometryScriptGeneralPolygonList *pFVar8;
  longlong lVar9;
  TPolygon2<double> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double> local_78;
  
  EVar1 = param_2->EndType;
  local_78.Polygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Polygons.ArrayNum = 0;
  local_78.Polygons.ArrayMax = 0;
  local_78.Result.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Result.ArrayNum = 0;
  local_78.Result.ArrayMax = 0;
  if (EVar1 == Butt) {
    local_78.EndType = Butt;
  }
  else {
    if (EVar1 != Square) {
      if (EVar1 == Round) {
        local_78.EndType = Round;
        goto LAB_14ceb85a5;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                         ,0x204,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
        return pFVar8;
      }
    }
    local_78.EndType = Square;
  }
LAB_14ceb85a5:
  EVar2 = param_2->JoinType;
  if (EVar2 != Square) {
    if (EVar2 == Round) {
      local_78.JoinType = Round;
      goto LAB_14ceb85ed;
    }
    if (EVar2 == Miter) {
      local_78.JoinType = Miter;
      goto LAB_14ceb85ed;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                       ,0x1f2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
      return pFVar8;
    }
  }
  local_78.JoinType = Square;
LAB_14ceb85ed:
  local_78.MiterLimit = param_2->MiterLimit;
  local_78.MaxStepsPerRadian = param_2->MaximumStepsPerRadian;
  local_88 = (param_1->AllocatorInstance).Data;
  iStack_80 = param_1->ArrayNum;
  local_78.DefaultStepsPerRadianScale = param_2->StepsPerRadianScale;
  local_78.Offset = param_3;
  if (iStack_80 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
      return pFVar8;
    }
  }
  if ((local_78.Polygons.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      local_78.Polygons.AllocatorInstance.Data + (longlong)local_78.Polygons.ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (local_78.Polygons.ArrayNum == local_78.Polygons.ArrayMax) {
    local_78.Polygons.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,(ForAnyElementType *)&local_78,&local_78.Polygons.ArrayMax);
  }
  lVar9 = (longlong)local_78.Polygons.ArrayNum;
  local_78.Polygons.ArrayNum = local_78.Polygons.ArrayNum + 1;
  *(FScriptContainerElement **)(local_78.Polygons.AllocatorInstance.Data + lVar9 * 0x10) = local_88;
  *(ulonglong *)(local_78.Polygons.AllocatorInstance.Data + lVar9 * 0x10 + 8) =
       CONCAT44(uStack_7c,iStack_80);
  bVar6 = UE::Geometry::TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double>::
          ComputeResult(&local_78);
  *param_4 = bVar6;
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  if ((*param_4 == false) && (param_5)) {
    if ((__return_storage_ptr__->Polygons).Object ==
        (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
        return pFVar8;
      }
    }
    local_98.Vertices.ArrayNum = param_1->ArrayNum;
    lVar9 = (longlong)local_98.Vertices.ArrayNum;
    pTVar3 = (__return_storage_ptr__->Polygons).Object;
    pFVar4 = (param_1->AllocatorInstance).Data;
    local_98.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_98.Vertices.ArrayNum == 0) {
      local_98.Vertices.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_98.Vertices.ArrayNum,0,(ForAnyElementType *)&local_98,
                 local_98.Vertices.ArrayNum,&local_98.Vertices.ArrayMax);
      memcpy(local_98.Vertices.AllocatorInstance.Data,pFVar4,lVar9 << 4);
    }
    iVar7 = pTVar3->ArrayNum;
    if (iVar7 == pTVar3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
    }
    pTVar3->ArrayNum = iVar7 + 1;
    UE::Geometry::TGeneralPolygon2<double>::TGeneralPolygon2<double>
              ((TGeneralPolygon2<double> *)
               ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x28),&local_98);
    if (local_98.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Vertices.AllocatorInstance.Data);
    }
  }
  else {
    if ((__return_storage_ptr__->Polygons).Object ==
        (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
        return pFVar8;
      }
    }
    pTVar3 = (__return_storage_ptr__->Polygons).Object;
    if (pTVar3 != &local_78.Result) {
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                ((TGeneralPolygon2<double> *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar3->AllocatorInstance).Data = local_78.Result.AllocatorInstance.Data;
      local_78.Result.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar3->ArrayNum = local_78.Result.ArrayNum;
      pTVar3->ArrayMax = local_78.Result.ArrayMax;
      local_78.Result.ArrayNum = 0;
      local_78.Result.ArrayMax = 0;
    }
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_78.Result.AllocatorInstance.Data,
             local_78.Result.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_78.Result.AllocatorInstance.Data !=
      (TGeneralPolygon2<double> *)0x0) {
    FMemory::Free(local_78.Result.AllocatorInstance.Data);
  }
  if (local_78.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Polygons.AllocatorInstance.Data);
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// GetPolygonArea @ 14cebbcb0

double __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonArea
          (FGeometryScriptGeneralPolygonList *param_1,bool *param_2,int param_3)

{
  TGeneralPolygon2<double> *this;
  double dVar1;
  
  this = ::`anonymous_namespace'::GetGeneralPolygonHelper(param_1,param_3);
  if (this != (TGeneralPolygon2<double> *)0x0) {
    *param_2 = true;
    dVar1 = UE::Geometry::TGeneralPolygon2<double>::SignedArea(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    return dVar1;
  }
  *param_2 = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return 0.0;
}

// GetPolygonBounds @ 14cebbdc0

TBox2<double> * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonBounds
          (TBox2<double> *__return_storage_ptr__,FGeometryScriptGeneralPolygonList *param_1,
          bool *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  TGeneralPolygon2<double> *this;
  TAxisAlignedBox2<double> *pTVar6;
  TAxisAlignedBox2<double> local_28;
  double dVar4;
  
  this = ::`anonymous_namespace'::GetGeneralPolygonHelper(param_1,param_3);
  if (this == (TGeneralPolygon2<double> *)0x0) {
    *param_2 = false;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
  }
  else {
    *param_2 = true;
    pTVar6 = UE::Geometry::TGeneralPolygon2<double>::Bounds(this,&local_28);
    dVar5 = (pTVar6->Min).field0_0x0._s_0.Y;
    dVar2 = (pTVar6->Min).field0_0x0._s_0.X;
    dVar3 = (pTVar6->Max).field0_0x0._s_0.X;
    dVar4 = (pTVar6->Max).field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar6->Min).field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar5;
    dVar5 = (pTVar6->Max).field0_0x0._s_0.Y;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = (pTVar6->Max).field0_0x0._s_0.X;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar5;
    if ((dVar4 <= dVar2 && dVar2 != dVar3) ||
       (dVar2 = (pTVar6->Min).field0_0x0._s_0.Y, pdVar1 = &(pTVar6->Max).field0_0x0._s_0.Y,
       *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
      __return_storage_ptr__->bIsValid = false;
    }
    else {
      __return_storage_ptr__->bIsValid = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPolygonCount @ 14cebbf80

int __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonCount
          (FGeometryScriptGeneralPolygonList *param_1)

{
  int iVar1;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->Polygons).Object;
  if (pTVar2 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetPolygonHoleCount @ 14cebbfc0

int __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonHoleCount
          (FGeometryScriptGeneralPolygonList *param_1,bool *param_2,int param_3)

{
  int iVar1;
  TGeneralPolygon2<double> *pTVar2;
  
  pTVar2 = ::`anonymous_namespace'::GetGeneralPolygonHelper(param_1,param_3);
  if (pTVar2 != (TGeneralPolygon2<double> *)0x0) {
    *param_2 = true;
    iVar1 = (pTVar2->Holes).ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  *param_2 = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetPolygonListArea @ 14cebc020

double __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListArea
          (FGeometryScriptGeneralPolygonList *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_b8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_a8 [6];
  
  pTVar4 = (param_1->Polygons).Object;
  dVar14 = 0.0;
  dVar15 = 0.0;
  if (pTVar4 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar4->ArrayNum;
    pFVar13 = (pTVar4->AllocatorInstance).Data;
    uVar19 = (undefined4)__real_bff0000000000000;
    uVar6 = (ulonglong)__real_bff0000000000000 >> 0x20;
    pFVar12 = pFVar13 + 0x20;
    uVar20 = (undefined4)__real_3ff0000000000000;
    uVar7 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    local_res20 = pFVar13 + (longlong)iVar1 * 0x28;
    while( true ) {
      pFVar8 = local_res20;
      if (pTVar4->ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      dVar15 = dVar14;
      if (pFVar13 == pFVar8) break;
      uVar17 = uVar20;
      uVar18 = (int)uVar7;
      if (pFVar12[-0x10] != (FScriptContainerElement)0x0) {
        uVar17 = uVar19;
        uVar18 = (int)uVar6;
      }
      local_b8.DataPtr = *(TVector2<double> **)pFVar13;
      iVar2 = *(int *)(pFVar12 + -0x18);
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        dVar14 = (double)(*pcVar5)();
        return dVar14;
      }
      local_b8.ArrayNum = iVar2;
      dVar15 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(&local_b8);
      iVar2 = *(int *)pFVar12;
      puVar10 = *(undefined8 **)(pFVar12 + -8);
      puVar11 = puVar10 + (longlong)iVar2 * 2;
      dVar15 = dVar15 * (double)CONCAT44(uVar18,uVar17);
      while( true ) {
        if (*(int *)pFVar12 != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (puVar10 == puVar11) break;
        local_a8[0].DataPtr = (TVector2<double> *)*puVar10;
        iVar3 = *(int *)(puVar10 + 1);
        if ((iVar3 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          dVar14 = (double)(*pcVar5)();
          return dVar14;
        }
        local_a8[0].ArrayNum = iVar3;
        dVar16 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(local_a8);
        puVar10 = puVar10 + 2;
        dVar15 = dVar15 + dVar16 * (double)CONCAT44(uVar18,uVar17);
      }
      dVar14 = dVar14 + dVar15;
      pFVar13 = pFVar13 + 0x28;
      pFVar12 = pFVar12 + 0x28;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return dVar15;
}

// GetPolygonListBounds @ 14cebc240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox2<double> * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListBounds
          (TBox2<double> *__return_storage_ptr__,FGeometryScriptGeneralPolygonList *param_1)

{
  double dVar1;
  double dVar2;
  void *_Src;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 auVar4 [16];
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  TVector2<double>_u_0 TVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  uint local_178;
  FScriptContainerElement *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_148;
  FScriptContainerElement *local_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  TAxisAlignedBox2<double> local_108 [6];
  
  local_148 = (param_1->Polygons).Object;
  local_168 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_164 = _UNK_150a9e644;
  uStack_160 = _UNK_150a9e648;
  uStack_15c = _UNK_150a9e64c;
  local_158 = (undefined1  [16])___xmm_ffefffffffffffffffefffffffffffff;
  auVar4 = local_158;
  uVar18 = __xmm_ffefffffffffffffffefffffffffffff._8_4_;
  uVar21 = __xmm_ffefffffffffffffffefffffffffffff._12_4_;
  uVar27 = (undefined4)__xmm_ffefffffffffffffffefffffffffffff;
  uVar29 = __xmm_ffefffffffffffffffefffffffffffff._4_4_;
  TVar16 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar32 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar33 = _UNK_150a9e644;
  uVar23 = _UNK_150a9e648;
  uVar25 = _UNK_150a9e64c;
  if (local_148 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    local_178 = local_148->ArrayNum;
    uVar12 = (ulonglong)(int)local_178;
    local_138 = (double)CONCAT44(_UNK_150a9e64c,_UNK_150a9e648);
    local_158._8_8_ = __xmm_ffefffffffffffffffefffffffffffff._8_8_;
    local_158._0_8_ = (undefined8)__xmm_ffefffffffffffffffefffffffffffff;
    pFVar10 = (local_148->AllocatorInstance).Data;
    local_140 = pFVar10 + uVar12 * 0x28;
    pFVar14 = pFVar10 + 0x20;
    uVar34 = (undefined4)__real_7fefffffffffffff;
    uVar35 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar36 = (undefined4)__real_ffefffffffffffff;
    uVar37 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    local_118 = (double)local_158._8_8_;
    uStack_110 = 0;
    local_128 = (double)local_158._0_8_;
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    local_158 = auVar4;
    while( true ) {
      pFVar5 = local_140;
      uVar33 = uStack_164;
      uVar32 = local_168;
      local_170 = pFVar10;
      if (local_148->ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar5) break;
      UE::Geometry::TPolygon2<double>::Bounds((TPolygon2<double> *)pFVar10,local_108);
      local_res20 = *(uint *)pFVar14;
      uVar12 = (ulonglong)(int)local_res20;
      puVar15 = *(undefined8 **)(pFVar14 + -8);
      uVar32 = (undefined4)local_108[0].Max.field0_0x0._s_0.Y;
      uVar33 = (undefined4)((ulonglong)local_108[0].Max.field0_0x0._8_8_ >> 0x20);
      uVar18 = (undefined4)local_108[0].Max.field0_0x0._s_0.X;
      uVar21 = (undefined4)((ulonglong)local_108[0].Max.field0_0x0._0_8_ >> 0x20);
      uVar27 = (undefined4)local_108[0].Min.field0_0x0._s_0.Y;
      uVar29 = (undefined4)((ulonglong)local_108[0].Min.field0_0x0._8_8_ >> 0x20);
      uVar23 = (undefined4)local_108[0].Min.field0_0x0._s_0.X;
      uVar25 = (undefined4)((ulonglong)local_108[0].Min.field0_0x0._0_8_ >> 0x20);
      puVar13 = puVar15 + uVar12 * 2;
      while( true ) {
        if (*(int *)pFVar14 != (int)uVar12) {
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (puVar15 == puVar13) break;
        local_180 = *(int *)(puVar15 + 1);
        lVar9 = (longlong)local_180;
        _Src = (void *)*puVar15;
        local_188.Data = (FScriptContainerElement *)0x0;
        if (local_180 == 0) {
          local_17c = 0;
          iVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_180,0,&local_188,local_180,&local_17c);
          memcpy(local_188.Data,_Src,lVar9 << 4);
          iVar7 = local_180;
        }
        pFVar10 = local_188.Data + (longlong)iVar7 * 0x10;
        FVar11.Data = local_188.Data;
        uVar17 = uVar34;
        uVar20 = uVar35;
        uVar22 = uVar34;
        uVar24 = uVar35;
        uVar26 = uVar36;
        uVar28 = uVar37;
        uVar30 = uVar36;
        uVar31 = uVar37;
        iVar8 = iVar7;
        while( true ) {
          if (iVar8 != iVar7) {
            `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
            iVar8 = local_180;
          }
          if (FVar11.Data == pFVar10) break;
          dVar1 = *(double *)FVar11.Data;
          dVar2 = *(double *)(FVar11.Data + 8);
          uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
          if (dVar1 <= (double)CONCAT44(uVar20,uVar17)) {
            uVar17 = SUB84(dVar1,0);
            uVar20 = uVar19;
          }
          if ((double)CONCAT44(uVar28,uVar26) <= dVar1) {
            uVar26 = SUB84(dVar1,0);
            uVar28 = uVar19;
          }
          FVar11.Data = FVar11.Data + 0x10;
          uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
          if (dVar2 <= (double)CONCAT44(uVar24,uVar22)) {
            uVar22 = SUB84(dVar2,0);
            uVar24 = uVar19;
          }
          if ((double)CONCAT44(uVar31,uVar30) <= dVar2) {
            uVar30 = SUB84(dVar2,0);
            uVar31 = uVar19;
          }
        }
        if ((double)CONCAT44(uVar20,uVar17) <= (double)CONCAT44(uVar25,uVar23)) {
          uVar23 = uVar17;
          uVar25 = uVar20;
        }
        if ((double)CONCAT44(uVar24,uVar22) <= (double)CONCAT44(uVar29,uVar27)) {
          uVar27 = uVar22;
          uVar29 = uVar24;
        }
        if ((double)CONCAT44(uVar21,uVar18) < (double)CONCAT44(uVar28,uVar26) ||
            (double)CONCAT44(uVar21,uVar18) == (double)CONCAT44(uVar28,uVar26)) {
          uVar18 = uVar26;
          uVar21 = uVar28;
        }
        if ((double)CONCAT44(uVar33,uVar32) < (double)CONCAT44(uVar31,uVar30) ||
            (double)CONCAT44(uVar33,uVar32) == (double)CONCAT44(uVar31,uVar30)) {
          uVar32 = uVar30;
          uVar33 = uVar31;
        }
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data);
        }
        uVar12 = (ulonglong)local_res20;
        puVar15 = puVar15 + 2;
      }
      if ((double)CONCAT44(uVar25,uVar23) <= (double)CONCAT44(uStack_164,local_168)) {
        uStack_160 = 0;
        uStack_15c = 0;
        local_168 = uVar23;
        uStack_164 = uVar25;
      }
      uVar23 = SUB84(local_138,0);
      uVar25 = (int)((ulonglong)local_138 >> 0x20);
      if ((double)CONCAT44(uVar29,uVar27) <= local_138) {
        local_138 = (double)CONCAT44(uVar29,uVar27);
        uStack_130 = 0;
        uVar23 = uVar27;
        uVar25 = uVar29;
      }
      uVar27 = SUB84(local_128,0);
      uVar29 = (int)((ulonglong)local_128 >> 0x20);
      if (local_128 < (double)CONCAT44(uVar21,uVar18) ||
          local_128 == (double)CONCAT44(uVar21,uVar18)) {
        local_128 = (double)CONCAT44(uVar21,uVar18);
        uStack_120 = 0;
        uVar27 = uVar18;
        uVar29 = uVar21;
      }
      uVar18 = SUB84(local_118,0);
      uVar21 = (int)((ulonglong)local_118 >> 0x20);
      if (local_118 < (double)CONCAT44(uVar33,uVar32) ||
          local_118 == (double)CONCAT44(uVar33,uVar32)) {
        local_118 = (double)CONCAT44(uVar33,uVar32);
        uStack_110 = 0;
        uVar18 = uVar32;
        uVar21 = uVar33;
      }
      pFVar10 = local_170 + 0x28;
      uVar12 = (ulonglong)local_178;
      pFVar14 = pFVar14 + 0x28;
    }
    TVar16._4_4_ = uVar29;
    TVar16._0_4_ = uVar27;
    TVar16._12_4_ = uVar21;
    TVar16._8_4_ = uVar18;
  }
  *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar32;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar33;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar23;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar25;
  (__return_storage_ptr__->Max).field0_0x0 = TVar16;
  if (((double)CONCAT44(uVar29,uVar27) < (double)CONCAT44(uVar33,uVar32)) ||
     ((double)CONCAT44(uVar21,uVar18) < (double)CONCAT44(uVar25,uVar23))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  pTVar3 = (param_1->Polygons).SharedReferenceCount.ReferenceController;
  __return_storage_ptr__->bIsValid = bVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPolygonVertex @ 14cebc880

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertex
          (TVector2<double> *__return_storage_ptr__,FGeometryScriptGeneralPolygonList *param_1,
          bool *param_2,int param_3,int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TPolygon2<double> *pTVar6;
  TVector2<double> *pTVar7;
  uint uVar8;
  uint uVar9;
  
  pTVar6 = ::`anonymous_namespace'::GetSubPolygonHelper(param_1,param_4,param_5);
  if ((pTVar6 == (TPolygon2<double> *)0x0) || ((pTVar6->Vertices).ArrayNum == 0)) {
    *param_2 = false;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    *param_2 = true;
    iVar2 = (pTVar6->Vertices).ArrayNum;
    uVar8 = param_3 % iVar2;
    uVar9 = uVar8 + iVar2;
    if (-1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    uVar8 = 0;
    if ((int)uVar9 < iVar2) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector2<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar1 = (pTVar6->Vertices).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    dVar4 = *(double *)(pFVar1 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPolygonVertexCount @ 14cebcaf0

int __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertexCount
          (FGeometryScriptGeneralPolygonList *param_1,bool *param_2,int param_3,int param_4)

{
  int iVar1;
  TPolygon2<double> *pTVar2;
  
  pTVar2 = ::`anonymous_namespace'::GetSubPolygonHelper(param_1,param_3,param_4);
  if (pTVar2 != (TPolygon2<double> *)0x0) {
    *param_2 = true;
    iVar1 = (pTVar2->Vertices).ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  *param_2 = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetPolygonVertices @ 14cebcb90

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertices
          (FGeometryScriptGeneralPolygonList *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,bool *param_3,
          int param_4,int param_5)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = &::`anonymous_namespace'::GetSubPolygonHelper(param_1,param_4,param_5)->Vertices;
  if (pTVar1 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    *param_3 = true;
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(param_2,pTVar1);
  }
  *param_3 = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14cebd070

UClass * __cdecl UGeometryScriptLibrary_PolygonListFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_PolygonListFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_PolygonListFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_PolygonListFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_PolygonListFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.InnerSingleton;
}

// GetSimplePolygon @ 14cebde80

FGeometryScriptSimplePolygon * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::GetSimplePolygon
          (FGeometryScriptSimplePolygon *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,bool *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FGeometryScriptSimplePolygon *pFVar4;
  
  (__return_storage_ptr__->Vertices).Object =
       (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Vertices).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptSimplePolygon::Reset(__return_storage_ptr__,0);
  pTVar3 = &::`anonymous_namespace'::GetSubPolygonHelper(param_1,param_3,param_4)->Vertices;
  if (pTVar3 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    *param_2 = true;
    if ((__return_storage_ptr__->Vertices).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGeometryScriptSimplePolygon *)(*pcVar1)();
        return pFVar4;
      }
    }
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
              ((__return_storage_ptr__->Vertices).Object,pTVar3);
  }
  *param_2 = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PolygonsDifference @ 14cec0330

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsDifference
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptGeneralPolygonList *param_2)

{
  int iVar1;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TGeneralPolygon2<double> *pTVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  FGeometryScriptGeneralPolygonList *pFVar8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar9;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_68;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_58;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_48;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_38;
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  pTVar2 = (param_1->Polygons).Object;
  if (pTVar2 == (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->Polygons).SharedReferenceCount.ReferenceController);
  }
  else {
    if ((param_2->Polygons).Object ==
        (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((__return_storage_ptr__->Polygons).Object ==
           (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
        return pFVar8;
      }
      pTVar3 = (__return_storage_ptr__->Polygons).Object;
      if (pTVar3 != pTVar2) {
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                  ((TGeneralPolygon2<double> *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
        iVar1 = pTVar2->ArrayNum;
        piVar6 = &pTVar3->ArrayMax;
        pTVar4 = (TGeneralPolygon2<double> *)(pTVar2->AllocatorInstance).Data;
        pTVar3->ArrayNum = iVar1;
        if ((iVar1 == 0) && (*piVar6 == 0)) {
          *piVar6 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar1,*piVar6,&pTVar3->AllocatorInstance,iVar1,piVar6);
          ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                    ((pTVar3->AllocatorInstance).Data,pTVar4,iVar1);
        }
      }
    }
    if (((__return_storage_ptr__->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
      return pFVar8;
    }
    pTVar2 = (__return_storage_ptr__->Polygons).Object;
    if (((param_2->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
      return pFVar8;
    }
    pTVar9 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_48,(param_2->Polygons).Object);
    local_68.DataPtr._0_4_ = *(undefined4 *)&pTVar9->DataPtr;
    local_68.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar9->DataPtr + 4);
    local_68.ArrayNum = pTVar9->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    if (((param_1->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGeometryScriptGeneralPolygonList *)(*pcVar5)();
      return pFVar8;
    }
    pTVar9 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_38,(param_1->Polygons).Object);
    local_58.DataPtr = pTVar9->DataPtr;
    local_58.ArrayNum = pTVar9->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    UE::Geometry::PolygonsDifference(&local_58,&local_68,pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->Polygons).SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// PolygonsExclusiveOr @ 14cec0530

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsExclusiveOr
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptGeneralPolygonList *param_2)

{
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FGeometryScriptGeneralPolygonList *pFVar4;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar5;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_48;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_38;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  if (((param_1->Polygons).Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
     ((param_2->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->Polygons).SharedReferenceCount.ReferenceController);
  }
  else {
    if (((__return_storage_ptr__->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
    pTVar1 = (__return_storage_ptr__->Polygons).Object;
    if (((param_2->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
    pTVar5 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_28,(param_2->Polygons).Object);
    local_48.DataPtr._0_4_ = *(undefined4 *)&pTVar5->DataPtr;
    local_48.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar5->DataPtr + 4);
    local_48.ArrayNum = pTVar5->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    if (((param_1->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
    pTVar5 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,(param_1->Polygons).Object);
    local_38.DataPtr = pTVar5->DataPtr;
    local_38.ArrayNum = pTVar5->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    UE::Geometry::PolygonsExclusiveOr(&local_38,&local_48,pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->Polygons).SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// PolygonsIntersection @ 14cec0690

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsIntersection
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptGeneralPolygonList *param_2)

{
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FGeometryScriptGeneralPolygonList *pFVar4;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar5;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_48;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_38;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  if (((param_1->Polygons).Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
     ((param_2->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->Polygons).SharedReferenceCount.ReferenceController);
  }
  else {
    if (((__return_storage_ptr__->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
    pTVar1 = (__return_storage_ptr__->Polygons).Object;
    if (((param_2->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
    pTVar5 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_28,(param_2->Polygons).Object);
    local_48.DataPtr._0_4_ = *(undefined4 *)&pTVar5->DataPtr;
    local_48.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar5->DataPtr + 4);
    local_48.ArrayNum = pTVar5->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    if (((param_1->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
    pTVar5 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,(param_1->Polygons).Object);
    local_38.DataPtr = pTVar5->DataPtr;
    local_38.ArrayNum = pTVar5->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    UE::Geometry::PolygonsIntersection(&local_38,&local_48,pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->Polygons).SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// PolygonsMorphologyClose @ 14cec07f0

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyClose
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptPolygonOffsetOptions *param_2,
          double param_3,bool *param_4,bool param_5)

{
  FGeometryScriptGeneralPolygonList local_58;
  FGeometryScriptPolygonOffsetOptions local_48;
  
  if ((param_2->bOffsetBothSides != false) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  local_58.Polygons.Object = (param_1->Polygons).Object;
  local_58.Polygons.SharedReferenceCount.ReferenceController =
       (param_1->Polygons).SharedReferenceCount.ReferenceController;
  if (local_58.Polygons.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.Polygons.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.Polygons.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_48.bOffsetBothSides = param_2->bOffsetBothSides;
  local_48._17_7_ = *(undefined7 *)&param_2->field_0x11;
  local_48.StepsPerRadianScale = param_2->StepsPerRadianScale;
  local_48.JoinType = param_2->JoinType;
  local_48._1_7_ = *(undefined7 *)&param_2->field_0x1;
  local_48.MiterLimit = param_2->MiterLimit;
  local_48.MaximumStepsPerRadian = param_2->MaximumStepsPerRadian;
  PolygonsOffsets(__return_storage_ptr__,&local_58,&local_48,param_3,
                  (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000),
                  param_4,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PolygonsMorphologyOpen @ 14cec08e0

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyOpen
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptPolygonOffsetOptions *param_2,
          double param_3,bool *param_4,bool param_5)

{
  FGeometryScriptGeneralPolygonList local_58;
  FGeometryScriptPolygonOffsetOptions local_48;
  
  if ((param_2->bOffsetBothSides != false) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  local_58.Polygons.Object = (param_1->Polygons).Object;
  local_58.Polygons.SharedReferenceCount.ReferenceController =
       (param_1->Polygons).SharedReferenceCount.ReferenceController;
  if (local_58.Polygons.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.Polygons.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.Polygons.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_48.JoinType = param_2->JoinType;
  local_48._1_7_ = *(undefined7 *)&param_2->field_0x1;
  local_48.MiterLimit = param_2->MiterLimit;
  local_48.bOffsetBothSides = param_2->bOffsetBothSides;
  local_48._17_7_ = *(undefined7 *)&param_2->field_0x11;
  local_48.StepsPerRadianScale = param_2->StepsPerRadianScale;
  local_48.MaximumStepsPerRadian = param_2->MaximumStepsPerRadian;
  PolygonsOffsets(__return_storage_ptr__,&local_58,&local_48,
                  (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000),
                  param_3,param_4,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PolygonsOffset @ 14cec09d0

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffset
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptPolygonOffsetOptions *param_2,
          double param_3,bool *param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EGeometryScriptPolyOffsetJoinType EVar4;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FGeometryScriptGeneralPolygonList *pFVar9;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar10;
  EPolygonOffsetJoinType EVar11;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_78;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_68 [5];
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  if ((param_1->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  bVar8 = param_2->bOffsetBothSides;
  EVar4 = param_2->JoinType;
  dVar1 = param_2->StepsPerRadianScale;
  dVar2 = param_2->MaximumStepsPerRadian;
  if (EVar4 != Square) {
    if (EVar4 == Round) {
      EVar11 = Round;
      goto LAB_14cec0a91;
    }
    if (EVar4 == Miter) {
      EVar11 = Miter;
      goto LAB_14cec0a91;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                       ,0x1f2,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGeometryScriptGeneralPolygonList *)(*pcVar6)();
      return pFVar9;
    }
  }
  EVar11 = Square;
LAB_14cec0a91:
  dVar3 = param_2->MiterLimit;
  if (((__return_storage_ptr__->Polygons).Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FGeometryScriptGeneralPolygonList *)(*pcVar6)();
    return pFVar9;
  }
  pTVar5 = (__return_storage_ptr__->Polygons).Object;
  if (((param_1->Polygons).Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FGeometryScriptGeneralPolygonList *)(*pcVar6)();
    return pFVar9;
  }
  pTVar10 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
            TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                      (local_68,(param_1->Polygons).Object);
  local_78.DataPtr = pTVar10->DataPtr;
  local_78.ArrayNum = pTVar10->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
  bVar8 = UE::Geometry::PolygonsOffset
                    (param_3,&local_78,pTVar5,param_5,dVar3,EVar11,bVar8 != false,dVar2,dVar1);
  *param_4 = bVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PolygonsOffsets @ 14cec0bb0

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffsets
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,FGeometryScriptPolygonOffsetOptions *param_2,
          double param_3,double param_4,bool *param_5,bool param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EGeometryScriptPolyOffsetJoinType EVar4;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FGeometryScriptGeneralPolygonList *pFVar9;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar10;
  EPolygonOffsetJoinType EVar11;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_78;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_68 [5];
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  if ((param_1->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  bVar8 = param_2->bOffsetBothSides;
  EVar4 = param_2->JoinType;
  dVar1 = param_2->StepsPerRadianScale;
  dVar2 = param_2->MaximumStepsPerRadian;
  if (EVar4 != Square) {
    if (EVar4 == Round) {
      EVar11 = Round;
      goto LAB_14cec0c71;
    }
    if (EVar4 == Miter) {
      EVar11 = Miter;
      goto LAB_14cec0c71;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                       ,0x1f2,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGeometryScriptGeneralPolygonList *)(*pcVar6)();
      return pFVar9;
    }
  }
  EVar11 = Square;
LAB_14cec0c71:
  dVar3 = param_2->MiterLimit;
  if (((__return_storage_ptr__->Polygons).Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FGeometryScriptGeneralPolygonList *)(*pcVar6)();
    return pFVar9;
  }
  pTVar5 = (__return_storage_ptr__->Polygons).Object;
  if (((param_1->Polygons).Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FGeometryScriptGeneralPolygonList *)(*pcVar6)();
    return pFVar9;
  }
  pTVar10 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
            TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                      (local_68,(param_1->Polygons).Object);
  local_78.DataPtr = pTVar10->DataPtr;
  local_78.ArrayNum = pTVar10->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
  bVar8 = UE::Geometry::PolygonsOffsets
                    (param_3,param_4,&local_78,pTVar5,param_6,dVar3,EVar11,bVar8 != false,dVar2,
                     dVar1);
  *param_5 = bVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PolygonsUnion @ 14cec0d90

FGeometryScriptGeneralPolygonList * __cdecl
UGeometryScriptLibrary_PolygonListFunctions::PolygonsUnion
          (FGeometryScriptGeneralPolygonList *__return_storage_ptr__,
          FGeometryScriptGeneralPolygonList *param_1,bool param_2)

{
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FGeometryScriptGeneralPolygonList *pFVar4;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar5;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  (__return_storage_ptr__->Polygons).Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Polygons).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(__return_storage_ptr__,0);
  if ((param_1->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Polygons).SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  if ((__return_storage_ptr__->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar1 = (__return_storage_ptr__->Polygons).Object;
  if ((param_1->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGeometryScriptGeneralPolygonList *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar5 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
           TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                     (&local_18,(param_1->Polygons).Object);
  local_28.DataPtr = pTVar5->DataPtr;
  local_28.ArrayNum = pTVar5->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
  UE::Geometry::PolygonsUnion(&local_28,pTVar1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Polygons).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGeometryScriptLibrary_PolygonListFunctions @ 14cec27c0

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::
StaticRegisterNativesUGeometryScriptLibrary_PolygonListFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddPolygonToList @ 14cec4a00

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execAddPolygonToList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *pTVar3;
  FGeometryScriptGeneralPolygonList *pFVar4;
  int local_res10 [2];
  TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FGeometryScriptGeneralPolygonList local_38;
  FGeometryScriptSimplePolygon local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = &local_38;
  if ((FGeometryScriptGeneralPolygonList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptGeneralPolygonList *)0x0) {
    pFVar4 = (FGeometryScriptGeneralPolygonList *)param_2->MostRecentPropertyAddress;
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
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  pTVar3 = &local_58;
  if ((TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
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
  local_28.Vertices.Object = local_48;
  local_28.Vertices.SharedReferenceCount.ReferenceController = pTStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar2 = AddPolygonToList(pFVar4,&local_28,pTVar3,local_res10[0] != 0);
  *(int *)param_3 = iVar2;
  DestructItems<FGeometryScriptSimplePolygon,int>
            ((FGeometryScriptSimplePolygon *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Polygons.SharedReferenceCount.ReferenceController);
  return;
}

// execAppendPolygonList @ 14cec4dc0

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execAppendPolygonList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FGeometryScriptGeneralPolygonList *this;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FGeometryScriptGeneralPolygonList local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  this = &local_18;
  if ((FGeometryScriptGeneralPolygonList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptGeneralPolygonList *)0x0) {
    this = (FGeometryScriptGeneralPolygonList *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar6 = pTStack_20;
  pTVar5 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->Polygons).Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptGeneralPolygonList::Reset(this,0);
  }
  if (pTVar5 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((this->Polygons).Object ==
        (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar3 = (this->Polygons).Object;
    if (pTVar3 == pTVar5) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,iVar1,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax
                        );
      ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x28,
                 (TGeneralPolygon2<double> *)(pTVar5->AllocatorInstance).Data,iVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Polygons.SharedReferenceCount.ReferenceController);
  return;
}

// execCreatePolygonListFromSimplePolygons @ 14cec9e00

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonListFromSimplePolygons
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptGeneralPolygonList *pFVar2;
  TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> local_28;
  FGeometryScriptGeneralPolygonList local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = CreatePolygonListFromSimplePolygons(&local_18,pTVar3);
  if (param_3 != pFVar2) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         (pFVar2->Polygons).Object;
    (pFVar2->Polygons).Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &(pFVar2->Polygons).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Polygons.SharedReferenceCount.ReferenceController);
  DestructItems<FGeometryScriptSimplePolygon,int>
            ((FGeometryScriptSimplePolygon *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execCreatePolygonListFromSinglePolygon @ 14cec9ef0

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonListFromSinglePolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> *paVar4;
  TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int local_res10 [2];
  TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> local_68;
  FGeometryScriptGeneralPolygonList local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FGeometryScriptSimplePolygon local_38;
  
  local_48 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  pTVar5 = &local_68;
  if ((TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FGeometryScriptSimplePolygon,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
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
  pTVar3 = pTStack_40;
  pTVar2 = local_48;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTStack_40->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_58.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_58.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_58,0);
  local_38.Vertices.Object = pTVar2;
  local_38.Vertices.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  AddPolygonToList(&local_58,&local_38,pTVar5,bVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (param_3 != &local_58) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_58.Polygons.Object;
    local_58.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_58.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Polygons.SharedReferenceCount.ReferenceController);
  DestructItems<FGeometryScriptSimplePolygon,int>
            ((FGeometryScriptSimplePolygon *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execCreatePolygonsFromOpenPolyPathsOffset @ 14ceca0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonsFromOpenPolyPathsOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  FGeometryScriptPolyPath *pFVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FGeometryScriptGeneralPolygonList *pFVar10;
  bool *pbVar11;
  bool bVar12;
  bool local_res10 [8];
  int local_res18 [2];
  double local_res20;
  FGeometryScriptPolyPath *local_108;
  undefined8 local_100;
  TArray<FGeometryScriptPolyPath,TSizedDefaultAllocator<32>_> local_f8;
  EGeometryScriptPolyOffsetJoinType local_e8;
  undefined7 uStack_e7;
  double dStack_e0;
  EGeometryScriptPathOffsetEndType local_d8;
  undefined7 uStack_d7;
  double dStack_d0;
  double dStack_c8;
  FGeometryScriptGeneralPolygonList local_c0;
  FGeometryScriptOpenPathOffsetOptions local_a8 [2];
  
  local_108 = (FGeometryScriptPolyPath *)0x0;
  local_100 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  dStack_e0 = __real_4000000000000000;
  dStack_d0 = ___xmm_40240000000000003ff0000000000000;
  dStack_c8 = _UNK_152a18788;
  local_e8 = Square;
  local_d8 = Square;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
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
  local_res10[0] = false;
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
  pbVar11 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar11 = (bool *)param_2->MostRecentPropertyAddress;
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
  dVar9 = dStack_c8;
  dVar8 = dStack_d0;
  dVar7 = dStack_e0;
  pFVar5 = local_108;
  dVar4 = local_res20;
  bVar12 = local_res18[0] != 0;
  uVar2._1_7_ = uStack_e7;
  uVar2._0_1_ = local_e8;
  uVar3._1_7_ = uStack_d7;
  uVar3._0_1_ = local_d8;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = (int)local_100;
  local_f8.ArrayNum = (int)local_100;
  if ((int)local_100 == 0) {
    local_f8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_100,0,&local_f8.AllocatorInstance,(int)local_100,&local_f8.ArrayMax
              );
    ConstructItems<FGeometryScriptPolyPath,FGeometryScriptPolyPath,int>
              (local_f8.AllocatorInstance.Data,pFVar5,iVar6);
  }
  local_a8[0].MiterLimit = dVar7;
  local_a8[0].StepsPerRadianScale = dVar8;
  local_a8[0].MaximumStepsPerRadian = dVar9;
  local_a8[0]._0_8_ = uVar2;
  local_a8[0]._16_8_ = uVar3;
  pFVar10 = CreatePolygonsFromOpenPolyPathsOffset(&local_c0,&local_f8,local_a8,dVar4,pbVar11,bVar12)
  ;
  if (param_3 != pFVar10) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         (pFVar10->Polygons).Object;
    (pFVar10->Polygons).Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &(pFVar10->Polygons).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.Polygons.SharedReferenceCount.ReferenceController);
  DestructItems<FGeometryScriptPolyPath,int>(local_108,(int)local_100);
  if (local_108 != (FGeometryScriptPolyPath *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}

// execCreatePolygonsFromPathOffset @ 14ceca3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonsFromPathOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  void *_Src;
  double dVar5;
  double dVar6;
  double dVar7;
  FGeometryScriptGeneralPolygonList *pFVar8;
  longlong lVar9;
  bool *pbVar10;
  bool bVar11;
  bool local_res10 [8];
  int local_res18 [2];
  double local_res20;
  void *local_108;
  undefined8 local_100;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_f8;
  EGeometryScriptPolyOffsetJoinType local_e8;
  undefined7 uStack_e7;
  double dStack_e0;
  EGeometryScriptPathOffsetEndType local_d8;
  undefined7 uStack_d7;
  double dStack_d0;
  double dStack_c8;
  FGeometryScriptGeneralPolygonList local_c0;
  FGeometryScriptOpenPathOffsetOptions local_a8 [2];
  
  local_108 = (void *)0x0;
  local_100 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  dStack_e0 = __real_4000000000000000;
  dStack_d0 = ___xmm_40240000000000003ff0000000000000;
  dStack_c8 = _UNK_152a18788;
  local_e8 = Square;
  local_d8 = Square;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
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
  local_res10[0] = false;
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
  pbVar10 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar10 = (bool *)param_2->MostRecentPropertyAddress;
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
  dVar7 = dStack_c8;
  dVar6 = dStack_d0;
  dVar5 = dStack_e0;
  _Src = local_108;
  dVar4 = local_res20;
  bVar11 = local_res18[0] != 0;
  uVar2._1_7_ = uStack_e7;
  uVar2._0_1_ = local_e8;
  uVar3._1_7_ = uStack_d7;
  uVar3._0_1_ = local_d8;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_100;
  local_f8.ArrayNum = (int)local_100;
  if ((int)local_100 == 0) {
    local_f8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_100,0,&local_f8.AllocatorInstance,(int)local_100,&local_f8.ArrayMax
              );
    memcpy(local_f8.AllocatorInstance.Data,_Src,lVar9 << 4);
  }
  local_a8[0].MiterLimit = dVar5;
  local_a8[0].StepsPerRadianScale = dVar6;
  local_a8[0].MaximumStepsPerRadian = dVar7;
  local_a8[0]._0_8_ = uVar2;
  local_a8[0]._16_8_ = uVar3;
  pFVar8 = CreatePolygonsFromPathOffset(&local_c0,&local_f8,local_a8,dVar4,pbVar10,bVar11);
  if (param_3 != pFVar8) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         (pFVar8->Polygons).Object;
    (pFVar8->Polygons).Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &(pFVar8->Polygons).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.Polygons.SharedReferenceCount.ReferenceController);
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}

// execGetPolygonArea @ 14cecdf00

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  TGeneralPolygon2<double> *this;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  longlong lVar8;
  uchar *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uchar local_res10 [8];
  int local_res18 [4];
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
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
  pTVar6 = pTStack_40;
  plVar5 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)local_res18[0];
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_48 != (longlong *)0x0) && (-1 < local_res18[0])) &&
     (local_res18[0] < (int)local_48[1])) {
    if (local_res18[0] < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this = (TGeneralPolygon2<double> *)(*plVar5 + lVar8 * 0x28);
    if (this != (TGeneralPolygon2<double> *)0x0) {
      *puVar9 = '\x01';
      dVar4 = UE::Geometry::TGeneralPolygon2<double>::SignedArea(this);
      uVar10 = SUB84(dVar4,0);
      uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
      goto LAB_14cece090;
    }
  }
  *puVar9 = '\0';
  uVar10 = 0;
  uVar11 = 0;
LAB_14cece090:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(ulonglong *)param_3 = CONCAT44(uVar11,uVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetPolygonBounds @ 14cece1e0

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonBounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FField **ppFVar2;
  TGeneralPolygon2<double> *this;
  double dVar3;
  FProperty *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TAxisAlignedBox2<double> *pTVar9;
  longlong lVar10;
  uchar *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uchar local_res10 [8];
  int local_res18 [4];
  longlong *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  TAxisAlignedBox2<double> local_98 [2];
  longlong local_58;
  
  local_a8 = (longlong *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pTVar7 = pTStack_a0;
  plVar6 = local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)local_res18[0];
  if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_a8 != (longlong *)0x0) && (-1 < local_res18[0])) &&
     (local_res18[0] < (int)local_a8[1])) {
    if (local_res18[0] < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this = (TGeneralPolygon2<double> *)(*plVar6 + lVar10 * 0x28);
    if (this != (TGeneralPolygon2<double> *)0x0) {
      *puVar11 = '\x01';
      pTVar9 = UE::Geometry::TGeneralPolygon2<double>::Bounds(this,local_98);
      dVar3 = (pTVar9->Min).field0_0x0._s_0.X;
      uVar12 = *(undefined4 *)&(pTVar9->Min).field0_0x0;
      uVar13 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 4);
      uVar14 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 8);
      uVar15 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 0xc);
      uVar16 = *(undefined4 *)&(pTVar9->Max).field0_0x0;
      uVar17 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 4);
      uVar18 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 8);
      uVar19 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 0xc);
      if (((pTVar9->Max).field0_0x0._s_0.X <= dVar3 && dVar3 != (pTVar9->Max).field0_0x0._s_0.X) ||
         (dVar3 = (pTVar9->Min).field0_0x0._s_0.Y, pdVar1 = &(pTVar9->Max).field0_0x0._s_0.Y,
         *pdVar1 <= dVar3 && dVar3 != *pdVar1)) {
        local_58 = (ulonglong)local_58._1_7_ << 8;
      }
      else {
        local_58 = CONCAT71(local_58._1_7_,1);
      }
      goto LAB_14cece3c5;
    }
  }
  *puVar11 = '\0';
  local_58 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
LAB_14cece3c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  *(undefined4 *)param_3 = uVar12;
  *(undefined4 *)((longlong)param_3 + 4) = uVar13;
  *(undefined4 *)((longlong)param_3 + 8) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar19;
  *(longlong *)((longlong)param_3 + 0x20) = local_58;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  return;
}

// execGetPolygonCount @ 14cece660

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonCount
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

// execGetPolygonHoleCount @ 14cece710

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonHoleCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  longlong lVar7;
  undefined4 uVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  int local_res18 [4];
  longlong *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  local_38 = (longlong *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar8 = 0;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
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
  pTVar5 = pTStack_30;
  plVar4 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)local_res18[0];
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_38 != (longlong *)0x0) && (-1 < local_res18[0])) &&
     (local_res18[0] < (int)local_38[1])) {
    if (local_res18[0] < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar7 = *plVar4 + lVar7 * 0x28;
    if (lVar7 != 0) {
      *puVar9 = '\x01';
      uVar8 = *(undefined4 *)(lVar7 + 0x20);
      goto LAB_14cece888;
    }
  }
  *puVar9 = '\0';
LAB_14cece888:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined4 *)param_3 = uVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetPolygonListArea @ 14cece8c0

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonListArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 local_res10 [8];
  double *local_res18;
  undefined1 local_res20 [8];
  longlong *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_a8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_98 [6];
  
  local_b8 = (longlong *)0x0;
  pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pTVar13 = pTStack_b0;
  plVar12 = local_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_b0->SharedReferenceCount = (atomic<int>)((int)pTStack_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar8 = 0.0;
  dVar6 = 0.0;
  if (local_b8 != (longlong *)0x0) {
    lVar9 = local_b8[1];
    puVar18 = (undefined8 *)*local_b8;
    uVar21 = (undefined4)__real_bff0000000000000;
    uVar10 = (ulonglong)__real_bff0000000000000 >> 0x20;
    puVar1 = puVar18 + (longlong)(int)lVar9 * 5;
    piVar17 = (int *)(puVar18 + 4);
    uVar22 = (undefined4)__real_3ff0000000000000;
    uVar11 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    while( true ) {
      if ((int)plVar12[1] != (int)lVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      param_3 = local_res18;
      dVar6 = dVar8;
      if (puVar18 == puVar1) break;
      uVar19 = uVar22;
      uVar20 = (int)uVar11;
      if ((char)piVar17[-4] != '\0') {
        uVar19 = uVar21;
        uVar20 = (int)uVar10;
      }
      local_a8.DataPtr = (TVector2<double> *)*puVar18;
      iVar2 = piVar17[-6];
      if ((iVar2 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_a8.ArrayNum = iVar2;
      dVar6 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(&local_a8);
      iVar2 = *piVar17;
      puVar15 = *(undefined8 **)(piVar17 + -2);
      puVar16 = puVar15 + (longlong)iVar2 * 2;
      dVar6 = dVar6 * (double)CONCAT44(uVar20,uVar19);
      while( true ) {
        if (*piVar17 != iVar2) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if (puVar15 == puVar16) break;
        local_98[0].DataPtr = (TVector2<double> *)*puVar15;
        iVar3 = *(int *)(puVar15 + 1);
        if ((iVar3 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_98[0].ArrayNum = iVar3;
        dVar7 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(local_98);
        puVar15 = puVar15 + 2;
        dVar6 = dVar6 + dVar7 * (double)CONCAT44(uVar20,uVar19);
      }
      dVar8 = dVar8 + dVar6;
      puVar18 = puVar18 + 5;
      piVar17 = piVar17 + 10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  *(double *)param_3 = dVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  return;
}

// execGetPolygonListBounds @ 14ceceb70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonListBounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  FProperty *pFVar3;
  void *_Src;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *this;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar18 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar23 [16];
  undefined4 uVar27;
  undefined1 auVar24 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 local_res10 [8];
  undefined4 *local_res18;
  uint local_res20;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  uint local_198;
  int *local_190;
  longlong *local_188;
  TReferenceControllerBase<1> *pTStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  longlong *local_158;
  int *local_150;
  TReferenceControllerBase<1> *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  undefined8 uStack_110;
  TAxisAlignedBox2<double> local_108;
  undefined1 local_e8;
  undefined7 uStack_e7;
  
  local_188 = (longlong *)0x0;
  pTStack_180 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_158 = local_188;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_148 = pTStack_180;
  if (pTStack_180 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_180->SharedReferenceCount = (atomic<int>)((int)pTStack_180->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = __real_7fefffffffffffff;
  local_178 = (double)CONCAT44(_UNK_150a9e644,___xmm_7fefffffffffffff7fefffffffffffff);
  uStack_170 = CONCAT44(_UNK_150a9e64c,_UNK_150a9e648);
  local_168 = ___xmm_ffefffffffffffffffefffffffffffff;
  auVar24 = local_168;
  uVar29 = __xmm_ffefffffffffffffffefffffffffffff._8_4_;
  uVar31 = __xmm_ffefffffffffffffffefffffffffffff._12_4_;
  uVar17 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar19 = _UNK_150a9e644;
  if (local_188 == (longlong *)0x0) {
    uVar15 = (undefined4)__xmm_ffefffffffffffffffefffffffffffff;
    uVar16 = __xmm_ffefffffffffffffffefffffffffffff._4_4_;
    auVar24 = ___xmm_ffefffffffffffffffefffffffffffff;
    uVar34 = _UNK_150a9e648;
    uVar35 = _UNK_150a9e64c;
  }
  else {
    local_198 = *(uint *)(local_188 + 1);
    uVar11 = (ulonglong)(int)local_198;
    this = (int *)*local_188;
    local_168._8_8_ = __xmm_ffefffffffffffffffefffffffffffff._8_8_;
    local_168._0_8_ = (undefined8)__xmm_ffefffffffffffffffefffffffffffff;
    local_150 = this + uVar11 * 10;
    puVar13 = (uint *)(this + 8);
    uVar15 = (undefined4)__real_ffefffffffffffff;
    uVar16 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    local_118 = (double)local_168._8_8_;
    uStack_110 = 0;
    local_138 = (double)local_168._0_8_;
    uStack_130 = 0;
    local_128 = _UNK_150a9e648;
    uStack_124 = _UNK_150a9e64c;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_170 = 0;
    local_168 = auVar24;
    while( true ) {
      uVar35 = uStack_124;
      uVar34 = local_128;
      dVar1 = local_138;
      piVar5 = local_150;
      local_190 = this;
      if ((int)local_158[1] != (int)uVar11) {
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (this == piVar5) break;
      UE::Geometry::TPolygon2<double>::Bounds((TPolygon2<double> *)this,&local_108);
      local_res20 = *puVar13;
      uVar11 = (ulonglong)(int)local_res20;
      puVar14 = *(undefined8 **)(puVar13 + -2);
      uVar34 = SUB84(local_108.Max.field0_0x0._s_0.Y,0);
      uVar35 = (undefined4)((ulonglong)local_108.Max.field0_0x0._8_8_ >> 0x20);
      uVar29 = SUB84(local_108.Max.field0_0x0._s_0.X,0);
      uVar31 = (undefined4)((ulonglong)local_108.Max.field0_0x0._0_8_ >> 0x20);
      uVar22 = SUB84(local_108.Min.field0_0x0._s_0.Y,0);
      uVar25 = (undefined4)((ulonglong)local_108.Min.field0_0x0._8_8_ >> 0x20);
      uVar26 = 0;
      uVar27 = 0;
      uVar17 = SUB84(local_108.Min.field0_0x0._s_0.X,0);
      uVar19 = (undefined4)((ulonglong)local_108.Min.field0_0x0._0_8_ >> 0x20);
      uVar20 = 0;
      uVar21 = 0;
      puVar12 = puVar14 + uVar11 * 2;
      while( true ) {
        if (*puVar13 != (uint)uVar11) {
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res10);
        }
        if (puVar14 == puVar12) break;
        local_1a0 = *(int *)(puVar14 + 1);
        lVar8 = (longlong)local_1a0;
        _Src = (void *)*puVar14;
        local_1a8.Data = (FScriptContainerElement *)0x0;
        if (local_1a0 == 0) {
          local_19c = 0;
          iVar6 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_1a0,0,&local_1a8,local_1a0,&local_19c);
          memcpy(local_1a8.Data,_Src,lVar8 << 4);
          iVar6 = local_1a0;
        }
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar4;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar4;
        pFVar9 = local_1a8.Data + (longlong)iVar6 * 0x10;
        FVar10.Data = local_1a8.Data;
        uVar28 = uVar15;
        uVar30 = uVar16;
        uVar32 = uVar15;
        uVar33 = uVar16;
        iVar7 = iVar6;
        while( true ) {
          if (iVar7 != iVar6) {
            `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
            iVar7 = local_1a0;
          }
          if (FVar10.Data == pFVar9) break;
          dVar1 = *(double *)FVar10.Data;
          dVar2 = *(double *)(FVar10.Data + 8);
          if (dVar1 <= auVar18._0_8_) {
            auVar18._0_8_ = dVar1;
          }
          if ((double)CONCAT44(uVar30,uVar28) <= dVar1) {
            uVar28 = SUB84(dVar1,0);
            uVar30 = (undefined4)((ulonglong)dVar1 >> 0x20);
          }
          FVar10.Data = FVar10.Data + 0x10;
          if (dVar2 <= auVar23._0_8_) {
            auVar23._0_8_ = dVar2;
          }
          if ((double)CONCAT44(uVar33,uVar32) <= dVar2) {
            uVar32 = SUB84(dVar2,0);
            uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
        }
        if (auVar18._0_8_ <= (double)CONCAT44(uVar19,uVar17)) {
          uVar17 = auVar18._0_4_;
          uVar19 = auVar18._4_4_;
          uVar20 = auVar18._8_4_;
          uVar21 = auVar18._12_4_;
        }
        if (auVar23._0_8_ <= (double)CONCAT44(uVar25,uVar22)) {
          uVar22 = auVar23._0_4_;
          uVar25 = auVar23._4_4_;
          uVar26 = auVar23._8_4_;
          uVar27 = auVar23._12_4_;
        }
        if ((double)CONCAT44(uVar31,uVar29) < (double)CONCAT44(uVar30,uVar28) ||
            (double)CONCAT44(uVar31,uVar29) == (double)CONCAT44(uVar30,uVar28)) {
          uVar29 = uVar28;
          uVar31 = uVar30;
        }
        if ((double)CONCAT44(uVar35,uVar34) < (double)CONCAT44(uVar33,uVar32) ||
            (double)CONCAT44(uVar35,uVar34) == (double)CONCAT44(uVar33,uVar32)) {
          uVar34 = uVar32;
          uVar35 = uVar33;
        }
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        uVar11 = (ulonglong)local_res20;
        puVar14 = puVar14 + 2;
      }
      if (local_178 < (double)CONCAT44(uVar19,uVar17)) {
        uVar17 = (undefined4)local_178;
        uVar19 = local_178._4_4_;
      }
      else {
        local_178 = (double)CONCAT44(uVar19,uVar17);
        uStack_170 = CONCAT44(uVar21,uVar20);
      }
      if ((double)CONCAT44(uVar25,uVar22) <= (double)CONCAT44(uStack_124,local_128)) {
        local_128 = uVar22;
        uStack_124 = uVar25;
        uStack_120 = uVar26;
        uStack_11c = uVar27;
      }
      if (local_138 < (double)CONCAT44(uVar31,uVar29) ||
          local_138 == (double)CONCAT44(uVar31,uVar29)) {
        local_138 = (double)CONCAT44(uVar31,uVar29);
        uStack_130 = 0;
      }
      uVar29 = SUB84(local_118,0);
      uVar31 = (int)((ulonglong)local_118 >> 0x20);
      if (local_118 < (double)CONCAT44(uVar35,uVar34) ||
          local_118 == (double)CONCAT44(uVar35,uVar34)) {
        local_118 = (double)CONCAT44(uVar35,uVar34);
        uStack_110 = 0;
        uVar29 = uVar34;
        uVar31 = uVar35;
      }
      this = local_190 + 10;
      uVar11 = (ulonglong)local_198;
      puVar13 = puVar13 + 10;
    }
    auVar24._12_4_ = uVar31;
    auVar24._8_4_ = uVar29;
    auVar24._0_8_ = dVar1;
    param_3 = local_res18;
    uVar15 = (undefined4)local_138;
    uVar16 = local_138._4_4_;
  }
  if (((double)CONCAT44(uVar16,uVar15) < (double)CONCAT44(uVar19,uVar17)) ||
     ((double)CONCAT44(uVar31,uVar29) < (double)CONCAT44(uVar35,uVar34))) {
    local_e8 = 0;
  }
  else {
    local_e8 = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148);
  *(undefined4 *)param_3 = uVar17;
  *(undefined4 *)((longlong)param_3 + 4) = uVar19;
  *(undefined4 *)((longlong)param_3 + 8) = uVar34;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar35;
  *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar24;
  *(ulonglong *)((longlong)param_3 + 0x20) = CONCAT71(uStack_e7,local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_180);
  return;
}

// execGetPolygonVertex @ 14cecf2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uchar *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uchar local_res10 [8];
  undefined4 *local_res18;
  int local_res20 [2];
  int local_68;
  int local_64;
  longlong *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  local_60 = (longlong *)0x0;
  pTStack_58 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
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
  local_64 = 0;
  puVar14 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
  }
  local_68 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pTVar7 = pTStack_58;
  plVar10 = local_60;
  iVar6 = local_64;
  iVar3 = local_res20[0];
  lVar13 = (longlong)local_res20[0];
  lVar11 = (longlong)local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_58->SharedReferenceCount = (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_60 != (longlong *)0x0) && (-1 < local_68)) && (local_68 < (int)local_60[1])) {
    if (local_68 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar10 = (longlong *)(*plVar10 + lVar11 * 0x28);
    if (plVar10 != (longlong *)0x0) {
      if (iVar3 == -1) {
LAB_14cecf54d:
        if ((int)plVar10[1] != 0) {
          *puVar14 = '\x01';
          iVar3 = (int)plVar10[1];
          uVar9 = iVar6 % iVar3;
          uVar12 = uVar9 + iVar3;
          if (-1 < (int)uVar9) {
            uVar12 = uVar9;
          }
          uVar9 = 0;
          if ((int)uVar12 < iVar3) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          puVar2 = (undefined4 *)(*plVar10 + (longlong)(int)uVar12 * 0x10);
          uVar15 = *puVar2;
          uVar16 = puVar2[1];
          uVar17 = puVar2[2];
          uVar18 = puVar2[3];
          goto LAB_14cecf5ec;
        }
      }
      else if ((-1 < iVar3) && (iVar3 < (int)plVar10[4])) {
        if (iVar3 < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        plVar10 = (longlong *)(lVar13 * 0x10 + plVar10[3]);
        if (plVar10 != (longlong *)0x0) goto LAB_14cecf54d;
      }
    }
  }
  *puVar14 = '\0';
  if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
LAB_14cecf5ec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  *local_res18 = uVar15;
  local_res18[1] = uVar16;
  local_res18[2] = uVar17;
  local_res18[3] = uVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  return;
}

// execGetPolygonVertexCount @ 14cecf800

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertexCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  uchar *puVar11;
  uchar local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  uVar9 = 0;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pTVar6 = pTStack_40;
  plVar5 = local_48;
  iVar4 = local_res18[0];
  lVar10 = (longlong)local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)local_res18[0];
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_48 != (longlong *)0x0) && (-1 < local_res20[0])) &&
     (local_res20[0] < (int)local_48[1])) {
    if (local_res20[0] < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar10 = *plVar5 + lVar10 * 0x28;
    if (lVar10 != 0) {
      if (iVar4 == -1) {
LAB_14cecfa23:
        *puVar11 = '\x01';
        uVar9 = *(undefined4 *)(lVar10 + 8);
        goto LAB_14cecfa2f;
      }
      if ((-1 < iVar4) && (iVar4 < *(int *)(lVar10 + 0x20))) {
        if (iVar4 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar10 = lVar8 * 0x10 + *(longlong *)(lVar10 + 0x18);
        if (lVar10 != 0) goto LAB_14cecfa23;
      }
    }
  }
  *puVar11 = '\0';
LAB_14cecfa2f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined4 *)param_3 = uVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetPolygonVertices @ 14cecfb10

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar11;
  uchar local_res10 [8];
  int local_res20 [2];
  int local_58 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_50;
  longlong *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  
  local_40 = (longlong *)0x0;
  pTStack_38 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar8 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_50;
  if (pTVar8 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    this = pTVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58[0] = 0;
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pTVar6 = pTStack_38;
  plVar5 = local_40;
  iVar4 = local_res20[0];
  lVar10 = (longlong)local_58[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)local_res20[0];
  if (pTStack_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_38->SharedReferenceCount = (atomic<int>)((int)pTStack_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_40 != (longlong *)0x0) && (-1 < local_58[0])) && (local_58[0] < (int)local_40[1])) {
    if (local_58[0] < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar8 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*plVar5 + lVar10 * 0x28);
    if (pTVar8 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      if (iVar4 != -1) {
        if ((iVar4 < 0) || (*(int *)&pTVar8[2].AllocatorInstance.Data <= iVar4)) goto LAB_14cecfd59;
        if (iVar4 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pTVar8 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                 (lVar9 * 0x10 + *(longlong *)&pTVar8[1].ArrayNum);
        if (pTVar8 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0)
        goto LAB_14cecfd59;
      }
      *puVar11 = '\x01';
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(this,pTVar8);
    }
  }
LAB_14cecfd59:
  *puVar11 = '\0';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// execGetSimplePolygon @ 14ced13d0

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execGetSimplePolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  longlong lVar9;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar12;
  uchar local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  FGeometryScriptSimplePolygon local_58;
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar12 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pTVar7 = pTStack_40;
  plVar6 = local_48;
  iVar5 = local_res20[0];
  iVar4 = local_res18[0];
  lVar11 = (longlong)local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)local_res20[0];
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Vertices.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_58.Vertices.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptSimplePolygon::Reset(&local_58,0);
  this = local_58.Vertices.Object;
  if (((plVar6 != (longlong *)0x0) && (-1 < iVar5)) && (iVar5 < (int)plVar6[1])) {
    if ((iVar5 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar10 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
              (*plVar6 + lVar9 * 0x28);
    this = local_58.Vertices.Object;
    if (pTVar10 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      if (iVar4 != -1) {
        if ((iVar4 < 0) || (*(int *)&pTVar10[2].AllocatorInstance.Data <= iVar4))
        goto LAB_14ced1631;
        if ((iVar4 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar10 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                  (lVar11 * 0x10 + *(longlong *)&pTVar10[1].ArrayNum);
        this = local_58.Vertices.Object;
        if (pTVar10 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0)
        goto LAB_14ced1631;
      }
      this = local_58.Vertices.Object;
      *puVar12 = '\x01';
      if ((local_58.Vertices.Object ==
           (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(this,pTVar10);
    }
  }
LAB_14ced1631:
  *puVar12 = '\0';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (param_3 != &local_58) {
    *(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **)param_3 = this;
    local_58.Vertices.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0
    ;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_58.Vertices.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Vertices.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execPolygonsDifference @ 14ced3840

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsDifference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  TGeneralPolygon2<double> *pTVar5;
  code *pcVar6;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FGeometryScriptGeneralPolygonList local_98;
  undefined8 *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TGeneralPolygon2<double> *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TGeneralPolygon2<double> *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_48;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_38;
  
  local_78 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88 = (undefined8 *)0x0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar11 = pTStack_70;
  pTVar10 = local_78;
  pTVar9 = pTStack_80;
  puVar8 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_98,0);
  if (pTVar10 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    if (puVar8 == (undefined8 *)0x0) {
      if (local_98.Polygons.Object ==
          (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar7 = local_98.Polygons.Object;
      if (local_98.Polygons.Object != pTVar10) {
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                  ((TGeneralPolygon2<double> *)((local_98.Polygons.Object)->AllocatorInstance).Data,
                   (local_98.Polygons.Object)->ArrayNum);
        pTVar5 = (TGeneralPolygon2<double> *)(pTVar10->AllocatorInstance).Data;
        piVar1 = &pTVar7->ArrayMax;
        iVar2 = pTVar10->ArrayNum;
        pTVar7->ArrayNum = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar2,*piVar1,&pTVar7->AllocatorInstance,iVar2,piVar1);
          ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                    ((pTVar7->AllocatorInstance).Data,pTVar5,iVar2);
        }
      }
    }
    if (local_98.Polygons.Object ==
        (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar7 = local_98.Polygons.Object;
    if (puVar8 == (undefined8 *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_68 = (TGeneralPolygon2<double> *)*puVar8;
    iVar2 = *(int *)(puVar8 + 1);
    if (iVar2 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_58 = (TGeneralPolygon2<double> *)(pTVar10->AllocatorInstance).Data;
    iVar3 = pTVar10->ArrayNum;
    iStack_60 = iVar2;
    if (iVar3 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_48._12_4_ = uStack_5c;
    local_48.ArrayNum = iStack_60;
    local_38._12_4_ = uStack_4c;
    local_38.ArrayNum = iVar3;
    local_38.DataPtr = local_58;
    local_48.DataPtr = local_68;
    iStack_50 = iVar3;
    UE::Geometry::PolygonsDifference(&local_38,&local_48,pTVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (param_3 != &local_98) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_98.Polygons.Object;
    local_98.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_98.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// execPolygonsExclusiveOr @ 14ced3b50

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsExclusiveOr
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar9;
  FGeometryScriptGeneralPolygonList local_98;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_68;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_58;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_48;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_38;
  
  local_78 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar7 = pTStack_70;
  pTVar6 = local_78;
  pTVar5 = pTStack_80;
  pTVar4 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_98,0);
  if ((pTVar6 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)
     && (pTVar4 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0
        )) {
    if ((local_98.Polygons.Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = local_98.Polygons.Object;
    pTVar9 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_68,pTVar4);
    local_58.DataPtr = pTVar9->DataPtr;
    local_58.ArrayNum = pTVar9->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    pTVar9 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_38,pTVar6);
    local_48.DataPtr = pTVar9->DataPtr;
    local_48.ArrayNum = pTVar9->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    UE::Geometry::PolygonsExclusiveOr(&local_48,&local_58,pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (param_3 != &local_98) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_98.Polygons.Object;
    local_98.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_98.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// execPolygonsIntersection @ 14ced3d30

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *pTVar9;
  FGeometryScriptGeneralPolygonList local_98;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_68;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_58;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_48;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_38;
  
  local_78 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88 = (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar7 = pTStack_70;
  pTVar6 = local_78;
  pTVar5 = pTStack_80;
  pTVar4 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_98,0);
  if ((pTVar6 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0)
     && (pTVar4 != (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0
        )) {
    if ((local_98.Polygons.Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = local_98.Polygons.Object;
    pTVar9 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_68,pTVar4);
    local_58.DataPtr = pTVar9->DataPtr;
    local_58.ArrayNum = pTVar9->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    pTVar9 = TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int>::
             TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int><TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_38,pTVar6);
    local_48.DataPtr = pTVar9->DataPtr;
    local_48.ArrayNum = pTVar9->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    UE::Geometry::PolygonsIntersection(&local_48,&local_58,pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (param_3 != &local_98) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_98.Polygons.Object;
    local_98.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_98.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// execPolygonsMorphologyClose @ 14ced3f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsMorphologyClose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  double dVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  double dVar9;
  char cVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  EPolygonOffsetJoinType EVar14;
  uchar *puVar15;
  uint uVar16;
  uchar local_res10 [8];
  bool local_res18;
  int local_res20 [2];
  FGeometryScriptGeneralPolygonList local_108;
  double local_f8;
  undefined8 *local_f0;
  TReferenceControllerBase<1> *pTStack_e8;
  uint local_e0 [2];
  double dStack_d8;
  char local_d0;
  double dStack_c8;
  double dStack_c0;
  TGeneralPolygon2<double> *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_a8 [3];
  double local_78;
  
  local_f0 = (undefined8 *)0x0;
  pTStack_e8 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  dStack_d8 = __real_4000000000000000;
  dStack_c8 = ___xmm_40240000000000003ff0000000000000;
  dStack_c0 = _UNK_152a18788;
  local_e0[0] = local_e0[0] & 0xffffff00;
  local_d0 = '\0';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  local_f8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar15 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  dVar11 = dStack_c8;
  cVar10 = local_d0;
  dVar9 = dStack_d8;
  uVar8 = local_e0[0];
  pTVar7 = pTStack_e8;
  puVar6 = local_f0;
  dVar5 = local_f8;
  local_res18 = local_res20[0] != 0;
  uVar16 = SUB84(local_f8,0);
  local_78 = dStack_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_e8->SharedReferenceCount = (atomic<int>)((int)pTStack_e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_d0 != '\0') && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_108.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_108,0);
  if (puVar6 == (undefined8 *)0x0) goto LAB_14ced426e;
  uVar13 = uVar8 & 0xff;
  if ((char)uVar8 == '\0') {
LAB_14ced419c:
    EVar14 = Square;
  }
  else if (uVar13 == 1) {
    EVar14 = Round;
  }
  else {
    if (uVar13 != 2) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                          ,0x1f2,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14ced419c;
    }
    EVar14 = Miter;
  }
  if (local_108.Polygons.Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar4 = local_108.Polygons.Object;
  local_b8 = (TGeneralPolygon2<double> *)*puVar6;
  iVar1 = *(int *)(puVar6 + 1);
  if (iVar1 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_a8[0]._12_4_ = uStack_ac;
  local_a8[0].ArrayNum = iVar1;
  local_a8[0].DataPtr = local_b8;
  iStack_b0 = iVar1;
  bVar12 = UE::Geometry::PolygonsOffsets
                     (dVar5,(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                             __xmm_80000000000000008000000000000000._4_4_,
                                             uVar16 ^ (uint)__xmm_80000000000000008000000000000000),
                      local_a8,pTVar4,local_res18,dVar9,EVar14,cVar10 != '\0',local_78,dVar11);
  *puVar15 = bVar12;
LAB_14ced426e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (param_3 != &local_108) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_108.Polygons.Object;
    local_108.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_108.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e8);
  return;
}

// execPolygonsMorphologyOpen @ 14ced4320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsMorphologyOpen
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  double dVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  double dVar10;
  char cVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  EPolygonOffsetJoinType EVar15;
  uchar *puVar16;
  uint uVar17;
  uchar local_res10 [8];
  bool local_res18;
  int local_res20 [2];
  FGeometryScriptGeneralPolygonList local_108;
  double local_f8;
  undefined8 *local_f0;
  TReferenceControllerBase<1> *pTStack_e8;
  uint local_e0 [2];
  double dStack_d8;
  char local_d0;
  double dStack_c8;
  double dStack_c0;
  TGeneralPolygon2<double> *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_a8 [3];
  double local_78;
  
  local_f0 = (undefined8 *)0x0;
  pTStack_e8 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  dStack_d8 = __real_4000000000000000;
  dStack_c8 = ___xmm_40240000000000003ff0000000000000;
  dStack_c0 = _UNK_152a18788;
  local_e0[0] = local_e0[0] & 0xffffff00;
  local_d0 = '\0';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  local_f8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar16 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar16 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  dVar12 = dStack_c8;
  cVar11 = local_d0;
  dVar10 = dStack_d8;
  uVar9 = local_e0[0];
  pTVar8 = pTStack_e8;
  puVar7 = local_f0;
  dVar6 = local_f8;
  local_res18 = local_res20[0] != 0;
  uVar17 = SUB84(local_f8,0);
  uVar4 = (ulonglong)local_f8 >> 0x20;
  local_78 = dStack_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_e8->SharedReferenceCount = (atomic<int>)((int)pTStack_e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_d0 != '\0') && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_108.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_108,0);
  if (puVar7 == (undefined8 *)0x0) goto LAB_14ced467e;
  uVar14 = uVar9 & 0xff;
  if ((char)uVar9 == '\0') {
LAB_14ced45ac:
    EVar15 = Square;
  }
  else if (uVar14 == 1) {
    EVar15 = Round;
  }
  else {
    if (uVar14 != 2) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                          ,0x1f2,L"");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14ced45ac;
    }
    EVar15 = Miter;
  }
  if (local_108.Polygons.Object ==
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = local_108.Polygons.Object;
  local_b8 = (TGeneralPolygon2<double> *)*puVar7;
  iVar1 = *(int *)(puVar7 + 1);
  if (iVar1 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_a8[0]._12_4_ = uStack_ac;
  local_a8[0].ArrayNum = iVar1;
  local_a8[0].DataPtr = local_b8;
  iStack_b0 = iVar1;
  bVar13 = UE::Geometry::PolygonsOffsets
                     ((double)CONCAT44((uint)uVar4 ^ __xmm_80000000000000008000000000000000._4_4_,
                                       uVar17 ^ (uint)__xmm_80000000000000008000000000000000),dVar6,
                      local_a8,pTVar5,local_res18,dVar10,EVar15,cVar11 != '\0',local_78,dVar12);
  *puVar16 = bVar13;
LAB_14ced467e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (param_3 != &local_108) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_108.Polygons.Object;
    local_108.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_108.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e8);
  return;
}

// execPolygonsOffset @ 14ced4730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  double dVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  double dVar10;
  char cVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  EPolygonOffsetJoinType EVar15;
  uchar *puVar16;
  uchar local_res10 [8];
  bool local_res18;
  int local_res20 [2];
  FGeometryScriptGeneralPolygonList local_108;
  double local_f8;
  undefined8 *local_f0;
  TReferenceControllerBase<1> *pTStack_e8;
  uint local_e0 [2];
  double dStack_d8;
  char local_d0;
  double dStack_c8;
  double dStack_c0;
  TGeneralPolygon2<double> *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_a8 [3];
  double local_78;
  
  local_f0 = (undefined8 *)0x0;
  pTStack_e8 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  dStack_d8 = __real_4000000000000000;
  dStack_c8 = ___xmm_40240000000000003ff0000000000000;
  dStack_c0 = _UNK_152a18788;
  local_e0[0] = local_e0[0] & 0xffffff00;
  local_d0 = '\0';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  local_f8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar16 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar16 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  dVar12 = dStack_c8;
  cVar11 = local_d0;
  dVar10 = dStack_d8;
  uVar9 = local_e0[0];
  pTVar8 = pTStack_e8;
  puVar7 = local_f0;
  dVar6 = local_f8;
  local_res18 = local_res20[0] != 0;
  local_78 = dStack_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_e8->SharedReferenceCount = (atomic<int>)((int)pTStack_e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_108.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_108,0);
  if (puVar7 == (undefined8 *)0x0) goto LAB_14ced4a23;
  uVar14 = uVar9 & 0xff;
  if ((char)uVar9 == '\0') {
LAB_14ced4963:
    EVar15 = Square;
  }
  else if (uVar14 == 1) {
    EVar15 = Round;
  }
  else {
    if (uVar14 != 2) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                          ,0x1f2,L"");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14ced4963;
    }
    EVar15 = Miter;
  }
  if ((local_108.Polygons.Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_108.Polygons.Object;
  local_b8 = (TGeneralPolygon2<double> *)*puVar7;
  iVar2 = *(int *)(puVar7 + 1);
  if ((iVar2 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a8[0]._12_4_ = uStack_ac;
  local_a8[0].ArrayNum = iVar2;
  local_a8[0].DataPtr = local_b8;
  iStack_b0 = iVar2;
  bVar13 = UE::Geometry::PolygonsOffset
                     (dVar6,local_a8,pTVar5,local_res18,dVar10,EVar15,cVar11 != '\0',local_78,dVar12
                     );
  *puVar16 = bVar13;
LAB_14ced4a23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (param_3 != &local_108) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_108.Polygons.Object;
    local_108.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_108.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e8);
  return;
}

// execPolygonsOffsets @ 14ced4ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsOffsets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  double dVar6;
  double dVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  double dVar11;
  char cVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  EPolygonOffsetJoinType EVar16;
  uchar *puVar17;
  uchar local_res10 [8];
  bool local_res18;
  int local_res20 [2];
  FGeometryScriptGeneralPolygonList local_128;
  double local_118;
  double local_110;
  undefined8 *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  uint local_f8 [2];
  double dStack_f0;
  char local_e8;
  double dStack_e0;
  double dStack_d8;
  TGeneralPolygon2<double> *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_b8 [3];
  double local_88;
  
  local_108 = (undefined8 *)0x0;
  pTStack_100 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  dStack_f0 = __real_4000000000000000;
  dStack_e0 = ___xmm_40240000000000003ff0000000000000;
  dStack_d8 = _UNK_152a18788;
  local_f8[0] = local_f8[0] & 0xffffff00;
  local_e8 = '\0';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_110 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar17 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  dVar13 = dStack_e0;
  cVar12 = local_e8;
  dVar11 = dStack_f0;
  uVar10 = local_f8[0];
  pTVar9 = pTStack_100;
  puVar8 = local_108;
  dVar7 = local_110;
  dVar6 = local_118;
  local_res18 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = dStack_d8;
  if (pTStack_100 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_100->SharedReferenceCount = (atomic<int>)((int)pTStack_100->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_128.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_128,0);
  if (puVar8 == (undefined8 *)0x0) goto LAB_14ced4e08;
  uVar15 = uVar10 & 0xff;
  if ((char)uVar10 == '\0') {
LAB_14ced4d3e:
    EVar16 = Square;
  }
  else if (uVar15 == 1) {
    EVar16 = Round;
  }
  else {
    if (uVar15 != 2) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\PolygonFunctions.cpp"
                          ,0x1f2,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14ced4d3e;
    }
    EVar16 = Miter;
  }
  if ((local_128.Polygons.Object ==
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_128.Polygons.Object;
  local_c8 = (TGeneralPolygon2<double> *)*puVar8;
  iVar2 = *(int *)(puVar8 + 1);
  if ((iVar2 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_b8[0]._12_4_ = uStack_bc;
  local_b8[0].ArrayNum = iVar2;
  local_b8[0].DataPtr = local_c8;
  iStack_c0 = iVar2;
  bVar14 = UE::Geometry::PolygonsOffsets
                     (dVar7,dVar6,local_b8,pTVar5,local_res18,dVar11,EVar16,cVar12 != '\0',local_88,
                      dVar13);
  *puVar17 = bVar14;
LAB_14ced4e08:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (param_3 != &local_128) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_128.Polygons.Object;
    local_128.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_128.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_100);
  return;
}

// execPolygonsUnion @ 14ced4e90

void __cdecl
UGeometryScriptLibrary_PolygonListFunctions::execPolygonsUnion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  bool bVar8;
  int local_res10 [2];
  FGeometryScriptGeneralPolygonList local_58;
  undefined8 *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TGeneralPolygon2<double> *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  
  local_48 = (undefined8 *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
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
  pTVar6 = pTStack_40;
  puVar5 = local_48;
  bVar8 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Polygons.Object =
       (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_58.Polygons.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptGeneralPolygonList::Reset(&local_58,0);
  if (puVar5 != (undefined8 *)0x0) {
    if ((local_58.Polygons.Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar4 = local_58.Polygons.Object;
    local_38 = (TGeneralPolygon2<double> *)*puVar5;
    iVar1 = *(int *)(puVar5 + 1);
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    local_28.DataPtr = local_38;
    iStack_30 = iVar1;
    UE::Geometry::PolygonsUnion(&local_28,pTVar4,bVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (param_3 != &local_58) {
    *(TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_58.Polygons.Object;
    local_58.Polygons.Object =
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_58.Polygons.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Polygons.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

