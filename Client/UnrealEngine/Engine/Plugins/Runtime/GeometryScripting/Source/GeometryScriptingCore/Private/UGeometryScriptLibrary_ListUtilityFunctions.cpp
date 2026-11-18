// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 118

// StaticClass @ 14cd94900

UClass * __cdecl UGeometryScriptLibrary_ListUtilityFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_ListUtilityFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_ListUtilityFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_ListUtilityFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_ListUtilityFunctions @ 14cda5dc0

UGeometryScriptLibrary_ListUtilityFunctions * __thiscall
UGeometryScriptLibrary_ListUtilityFunctions::UGeometryScriptLibrary_ListUtilityFunctions
          (UGeometryScriptLibrary_ListUtilityFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_ListUtilityFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_ListUtilityFunctions @ 14cda5df0

UGeometryScriptLibrary_ListUtilityFunctions * __thiscall
UGeometryScriptLibrary_ListUtilityFunctions::UGeometryScriptLibrary_ListUtilityFunctions
          (UGeometryScriptLibrary_ListUtilityFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_ListUtilityFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_ListUtilityFunctions @ 14cda6a20

void __thiscall
UGeometryScriptLibrary_ListUtilityFunctions::~UGeometryScriptLibrary_ListUtilityFunctions
          (UGeometryScriptLibrary_ListUtilityFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_ListUtilityFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ClearColorList @ 14cdca600

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList
          (FGeometryScriptColorList *param_1,FLinearColor *param_2)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  ulong64 uVar9;
  
  pTVar1 = (param_1->List).Object;
  pTVar2 = (param_1->List).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = 0;
  if (pTVar1 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar9 = (ulong64)(uint)pTVar1->ArrayNum;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FGeometryScriptColorList::Reset(param_1,0);
  if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
  pTVar1 = (param_1->List).Object;
  iVar8 = (int)uVar9;
  if (-1 < iVar8) {
    piVar6 = &pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    if (*piVar6 != iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar8,&pTVar1->AllocatorInstance,0,piVar6);
    }
    if (0 < iVar8) {
      do {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)*piVar6 * 0x10)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = pTVar1->ArrayNum;
        if (iVar8 == *piVar6) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&pTVar1->AllocatorInstance,piVar6);
        }
        pTVar1->ArrayNum = iVar8 + 1;
        uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
        pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar3 = *(undefined8 *)&param_2->field0_0x0;
        *(undefined8 *)(pFVar3 + 8) = uVar5;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar9);
}

// ClearIndexList @ 14cdca770

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList
          (FGeometryScriptIndexList *param_1,int param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pTVar1 = (param_1->List).Object;
  pTVar2 = (param_1->List).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = 0;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar5 = pTVar1->ArrayNum;
  }
  local_res10[0] = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FGeometryScriptIndexList::Reset(param_1,param_1->IndexType,0);
  if ((param_1->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<int,TSizedDefaultAllocator<32>_>::Init((param_1->List).Object,local_res10,iVar5);
  return;
}

// ClearScalarList @ 14cdca900

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList
          (FGeometryScriptScalarList *param_1,double param_2)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  double local_res10;
  
  pTVar1 = (param_1->List).Object;
  pTVar2 = (param_1->List).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = 0;
  if (pTVar1 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar8 = (ulong64)(uint)pTVar1->ArrayNum;
  }
  local_res10 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FGeometryScriptScalarList::Reset(param_1,0);
  if ((param_1->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = (param_1->List).Object;
  iVar7 = (int)uVar8;
  if (-1 < iVar7) {
    piVar5 = &pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    if (*piVar5 != iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,&pTVar1->AllocatorInstance,0,piVar5);
    }
    if (0 < iVar7) {
      do {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
           ((FScriptContainerElement *)&local_res10 < pFVar3 + (longlong)*piVar5 * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar1->ArrayNum;
        if (iVar7 == *piVar5) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar5);
        }
        pTVar1->ArrayNum = iVar7 + 1;
        *(double *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_res10;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar8);
}

// ClearUVList @ 14cdcab10

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList
          (FGeometryScriptUVList *param_1,TVector2<double> *param_2)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  ulong64 uVar9;
  
  pTVar1 = (param_1->List).Object;
  pTVar2 = (param_1->List).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = 0;
  if (pTVar1 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar9 = (ulong64)(uint)pTVar1->ArrayNum;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FGeometryScriptUVList::Reset(param_1,0);
  if ((param_1->List).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
  pTVar1 = (param_1->List).Object;
  iVar8 = (int)uVar9;
  if (-1 < iVar8) {
    piVar6 = &pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    if (*piVar6 != iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,&pTVar1->AllocatorInstance,0,piVar6);
    }
    if (0 < iVar8) {
      do {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)*piVar6 * 0x10)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = pTVar1->ArrayNum;
        if (iVar8 == *piVar6) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,piVar6);
        }
        pTVar1->ArrayNum = iVar8 + 1;
        dVar5 = (param_2->field0_0x0)._s_0.Y;
        pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(double *)pFVar3 = (param_2->field0_0x0)._s_0.X;
        *(double *)(pFVar3 + 8) = dVar5;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar9);
}

// ClearVectorList @ 14cdcac80

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList
          (FGeometryScriptVectorList *param_1,TVector<double> *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = (param_1->List).Object;
  pTVar2 = (param_1->List).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = 0;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar5 = pTVar1->ArrayNum;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FGeometryScriptVectorList::Reset(param_1,0);
  if ((param_1->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
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
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            ((param_1->List).Object,param_2,iVar5);
  return;
}

// ConvertArrayToColorList @ 14cdcdb40

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptColorList *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FGeometryScriptColorList::Reset(param_2,0);
  if ((param_2->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Append<FLinearColor,TSizedDefaultAllocator<32>_>
            ((param_2->List).Object,param_1);
  return;
}

// ConvertArrayToIndexList @ 14cdcdbb0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FGeometryScriptIndexList *param_2,
          EGeometryScriptIndexType param_3)

{
  code *pcVar1;
  bool bVar2;
  
  FGeometryScriptIndexList::Reset(param_2,param_3,0);
  if ((param_2->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
            ((param_2->List).Object,param_1);
  return;
}

// ConvertArrayToScalarList @ 14cdcdc20

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,FGeometryScriptScalarList *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FGeometryScriptScalarList::Reset(param_2,0);
  if ((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
            ((param_2->List).Object,param_1);
  return;
}

// ConvertArrayToTriangleList @ 14cdcdc90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptTriangleList *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGeometryScriptTriangleList local_28;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if ((param_2->List).Object ==
      (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_28.List.SharedReferenceCount.ReferenceController = ::operator_new(0x20);
    if (local_28.List.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
       ) {
      local_28.List.Object = ___xmm_00000000000000000000000000000010;
      pTVar3 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      local_28.List.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_28.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      pTVar3 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
               (local_28.List.SharedReferenceCount.ReferenceController + 1);
      (local_28.List.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)0x1;
      (local_28.List.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_28.List.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_28.List.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
           (atomic<int>)0x0;
      local_28.List.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
           (atomic<int>)0x0;
      if (pTVar3 == (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      LOCK();
      (local_28.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
      pTVar4 = local_28.List.SharedReferenceCount.ReferenceController;
      local_28.List.Object = pTVar3;
    }
    if (param_2 != &local_28) {
      (param_2->List).Object = pTVar3;
      local_28.List.Object = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_2->List).SharedReferenceCount,&local_28.List.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.List.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if ((param_2->List).Object ==
        (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
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
  }
  pTVar3 = (param_2->List).Object;
  pTVar3->ArrayNum = 0;
  if (pTVar3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
  }
  if ((param_2->List).Object ==
      (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>((param_2->List).Object,param_1);
  return;
}

// ConvertArrayToUVList @ 14cdcde40

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptUVList *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FGeometryScriptUVList::Reset(param_2,0);
  if ((param_2->List).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>((param_2->List).Object,param_1);
  return;
}

// ConvertArrayToVectorList @ 14cdcdeb0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptVectorList *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FGeometryScriptVectorList::Reset(param_2,0);
  if ((param_2->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
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
  Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>((param_2->List).Object,param_1);
  return;
}

// ConvertColorListToArray @ 14cdcdf40

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray
          (FGeometryScriptColorList *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = (param_1->List).Object;
  if (pTVar1 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    Append<FLinearColor,TSizedDefaultAllocator<32>_>(param_2,pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertIndexListToArray @ 14cdce120

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray
          (FGeometryScriptIndexList *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = (param_1->List).Object;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>(param_2,pTVar1)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertScalarListToArray @ 14cdceb80

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray
          (FGeometryScriptScalarList *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = (param_1->List).Object;
  if (pTVar1 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
              (param_2,pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertTriangleListToArray @ 14cdd0500

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray
          (FGeometryScriptTriangleList *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = (param_1->List).Object;
  if (pTVar1 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>(param_2,pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertUVListToArray @ 14cdd0570

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray
          (FGeometryScriptUVList *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = (param_1->List).Object;
  if (pTVar1 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>(param_2,pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertVectorListToArray @ 14cdd05e0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray
          (FGeometryScriptVectorList *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = (param_1->List).Object;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(param_2,pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// DuplicateColorList @ 14cdd3a50

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList
          (FGeometryScriptColorList *param_1,FGeometryScriptColorList *param_2)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  FGeometryScriptColorList::Reset(param_2,0);
  if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
  pTVar1 = (param_1->List).Object;
  if ((param_2->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=((param_2->List).Object,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// DuplicateIndexList @ 14cdd3b00

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList
          (FGeometryScriptIndexList *param_1,FGeometryScriptIndexList *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  FGeometryScriptIndexList::Reset(param_2,param_1->IndexType,0);
  if ((param_1->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
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
  pTVar1 = (param_1->List).Object;
  if ((param_2->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<int,TSizedDefaultAllocator<32>_>::operator=((param_2->List).Object,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// DuplicateScalarList @ 14cdd3bb0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList
          (FGeometryScriptScalarList *param_1,FGeometryScriptScalarList *param_2)

{
  int iVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  
  FGeometryScriptScalarList::Reset(param_2,0);
  if (((param_1->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = (param_1->List).Object;
  if (((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = (param_2->List).Object;
  if (pTVar3 != pTVar2) {
    iVar1 = pTVar2->ArrayNum;
    _Src = (pTVar2->AllocatorInstance).Data;
    pTVar3->ArrayNum = iVar1;
    if ((iVar1 == 0) && (pTVar3->ArrayMax == 0)) {
      pTVar3->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,pTVar3->ArrayMax,&pTVar3->AllocatorInstance,iVar1,&pTVar3->ArrayMax);
      if (iVar1 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// DuplicateUVList @ 14cdd3cb0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList
          (FGeometryScriptUVList *param_1,FGeometryScriptUVList *param_2)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  FGeometryScriptUVList::Reset(param_2,0);
  if ((param_1->List).Object ==
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
  pTVar1 = (param_1->List).Object;
  if ((param_2->List).Object ==
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
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
            ((param_2->List).Object,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// DuplicateVectorList @ 14cdd3d60

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList
          (FGeometryScriptVectorList *param_1,FGeometryScriptVectorList *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  FGeometryScriptVectorList::Reset(param_2,0);
  if ((param_1->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
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
  pTVar1 = (param_1->List).Object;
  if ((param_2->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
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
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            ((param_2->List).Object,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ExtractColorListChannel @ 14cdd4450

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel
          (FGeometryScriptColorList *param_1,FGeometryScriptScalarList *param_2,int param_3)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  
  FGeometryScriptScalarList::Reset(param_2,0);
  if ((param_1->List).Object != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res8[0] = param_3;
    if ((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar1 = (param_2->List).Object;
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar1,local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ExtractColorListChannels @ 14cdd4510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels
          (FGeometryScriptColorList *param_1,FGeometryScriptVectorList *param_2,int param_3,
          int param_4,int param_5)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  FGeometryScriptVectorList::Reset(param_2,0);
  if ((param_1->List).Object != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    local_40 = param_5;
    local_48 = param_3;
    local_44 = param_4;
    if ((param_2->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar1 = (param_2->List).Object;
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar1,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ExtractUVListComponent @ 14cdd45f0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ExtractUVListComponent
          (FGeometryScriptUVList *param_1,FGeometryScriptScalarList *param_2,int param_3)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  
  FGeometryScriptScalarList::Reset(param_2,0);
  if ((param_1->List).Object !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res8[0] = param_3;
    if ((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar1 = (param_2->List).Object;
    if ((param_1->List).Object ==
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
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar1,local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ExtractVectorListComponent @ 14cdd46b0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ExtractVectorListComponent
          (FGeometryScriptVectorList *param_1,FGeometryScriptScalarList *param_2,int param_3)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  
  FGeometryScriptScalarList::Reset(param_2,0);
  if ((param_1->List).Object != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    local_res8[0] = param_3;
    if ((param_2->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar1 = (param_2->List).Object;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar1,local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// ExtractVectorListComponentsAsUVs @ 14cdd4770

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::ExtractVectorListComponentsAsUVs
          (FGeometryScriptVectorList *param_1,FGeometryScriptUVList *param_2,int param_3,int param_4
          )

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8;
  int local_resc;
  
  FGeometryScriptUVList::Reset(param_2,0);
  if ((param_1->List).Object != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    local_res8 = param_3;
    local_resc = param_4;
    if ((param_2->List).Object ==
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
    pTVar1 = (param_2->List).Object;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar1,&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// GetColorListItem @ 14cdd6a90

FLinearColor * __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem
          (FLinearColor *__return_storage_ptr__,FGeometryScriptColorList *param_1,int param_2,
          bool *param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FLinearColor *pFVar8;
  
  *param_3 = false;
  pTVar2 = (param_1->List).Object;
  if (((pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) && (-1 < param_2)) &&
     (param_2 < pTVar2->ArrayNum)) {
    *param_3 = true;
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLinearColor *)(*pcVar4)();
        return pFVar8;
      }
    }
    pTVar2 = (param_1->List).Object;
    uVar7 = 0;
    if (param_2 < pTVar2->ArrayNum) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLinearColor *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data + (longlong)param_2 * 0x10;
    uVar5 = *(undefined8 *)(pFVar1 + 8);
    pTVar3 = (param_1->List).SharedReferenceCount.ReferenceController;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)pFVar1;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetColorListLastIndex @ 14cdd6bb0

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex
          (FGeometryScriptColorList *param_1)

{
  int iVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1 + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return -1;
}

// GetColorListLength @ 14cdd6bf0

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(FGeometryScriptColorList *param_1)

{
  int iVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetIndexListItem @ 14cdd6df0

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem
          (FGeometryScriptIndexList *param_1,int param_2,bool *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  *param_3 = false;
  pTVar1 = (param_1->List).Object;
  if (((pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (-1 < param_2)) &&
     (param_2 < pTVar1->ArrayNum)) {
    *param_3 = true;
    if ((param_1->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    pTVar1 = (param_1->List).Object;
    uVar5 = 0;
    if (param_2 < pTVar1->ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = *(int *)((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return -1;
}

// GetIndexListLastIndex @ 14cdd6ef0

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex
          (FGeometryScriptIndexList *param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1 + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return -1;
}

// GetIndexListLength @ 14cdd6f40

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(FGeometryScriptIndexList *param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetPrivateStaticClass @ 14cdd84a0

UClass * __cdecl UGeometryScriptLibrary_ListUtilityFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_ListUtilityFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_ListUtilityFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_ListUtilityFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.InnerSingleton;
}

// GetScalarListItem @ 14cdd8f20

double __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem
          (FGeometryScriptScalarList *param_1,int param_2,bool *param_3)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  
  *param_3 = false;
  pTVar1 = (param_1->List).Object;
  if (((pTVar1 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) && (-1 < param_2)) &&
     (param_2 < pTVar1->ArrayNum)) {
    *param_3 = true;
    if ((param_1->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        dVar3 = (double)(*pcVar2)();
        return dVar3;
      }
    }
    pTVar1 = (param_1->List).Object;
    uVar5 = 0;
    if (param_2 < pTVar1->ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        dVar3 = (double)(*pcVar2)();
        return dVar3;
      }
    }
    dVar3 = *(double *)((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return dVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return 0.0;
}

// GetScalarListLastIndex @ 14cdd9020

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex
          (FGeometryScriptScalarList *param_1)

{
  int iVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1 + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return -1;
}

// GetScalarListLength @ 14cdd9060

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(FGeometryScriptScalarList *param_1)

{
  int iVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetTriangleListItem @ 14cddb0c0

TIntVector3<int> * __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem
          (TIntVector3<int> *__return_storage_ptr__,FGeometryScriptTriangleList *param_1,int param_2
          ,bool *param_3)

{
  int iVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  TIntVector3<int> *pTVar9;
  
  *param_3 = false;
  uVar6 = UE::Math::TIntVector3<int>::NoneValue.field0_0x0._s_0.Z;
  pTVar2 = (param_1->List).Object;
  if (((pTVar2 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) &&
      (-1 < param_2)) && (param_2 < pTVar2->ArrayNum)) {
    *param_3 = true;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TIntVector3<int> *)(*pcVar5)();
        return pTVar9;
      }
    }
    pTVar2 = (param_1->List).Object;
    uVar8 = 0;
    if (param_2 < pTVar2->ArrayNum) {
      uVar8 = (uint)~param_2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TIntVector3<int> *)(*pcVar5)();
        return pTVar9;
      }
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    iVar1 = *(int *)(pFVar3 + (longlong)param_2 * 0xc + 8);
    pTVar4 = (param_1->List).SharedReferenceCount.ReferenceController;
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)(pFVar3 + (longlong)param_2 * 0xc);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<int>::NoneValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetTriangleListLastTriangle @ 14cddb1f0

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle
          (FGeometryScriptTriangleList *param_1)

{
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  
  pTVar1 = (param_1->List).Object;
  iVar3 = 0;
  if (pTVar1 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar2 = pTVar1->ArrayNum + -1;
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return iVar3;
}

// GetTriangleListLength @ 14cddb230

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength
          (FGeometryScriptTriangleList *param_1)

{
  int iVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetUVListItem @ 14cddb460

TVector2<double> * __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem
          (TVector2<double> *__return_storage_ptr__,FGeometryScriptUVList *param_1,int param_2,
          bool *param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector2<double> *pTVar8;
  
  *param_3 = false;
  pTVar2 = (param_1->List).Object;
  if (((pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
      (-1 < param_2)) && (param_2 < pTVar2->ArrayNum)) {
    *param_3 = true;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector2<double> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pTVar2 = (param_1->List).Object;
    uVar7 = 0;
    if (param_2 < pTVar2->ArrayNum) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector2<double> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data + (longlong)param_2 * 0x10;
    dVar5 = *(double *)(pFVar1 + 8);
    pTVar3 = (param_1->List).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetUVListLastIndex @ 14cddb580

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(FGeometryScriptUVList *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1 + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return -1;
}

// GetUVListLength @ 14cddb5c0

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(FGeometryScriptUVList *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetVectorListItem @ 14cddb600

TVector<double> * __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem
          (TVector<double> *__return_storage_ptr__,FGeometryScriptVectorList *param_1,int param_2,
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
  pTVar3 = (param_1->List).Object;
  if (((pTVar3 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
      (-1 < param_2)) && (param_2 < pTVar3->ArrayNum)) {
    *param_3 = true;
    if ((param_1->List).Object ==
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
    pTVar3 = (param_1->List).Object;
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
    pTVar5 = (param_1->List).SharedReferenceCount.ReferenceController;
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
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetVectorListLastIndex @ 14cddb730

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex
          (FGeometryScriptVectorList *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1 + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return -1;
}

// GetVectorListLength @ 14cddb770

int __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(FGeometryScriptVectorList *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->List).Object;
  if (pTVar2 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return 0;
}

// SetColorListChannelFromScalars @ 14cde3de0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetColorListChannelFromScalars
          (FGeometryScriptColorList *param_1,FGeometryScriptScalarList *param_2,int param_3,
          FLinearColor *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  int local_res10 [2];
  FLinearColor_u_0 local_18;
  
  pTVar5 = (param_2->List).Object;
  if (pTVar5 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptColorList::Reset(param_1,0);
      pTVar5 = (param_2->List).Object;
    }
    uVar2 = *(undefined8 *)&param_4->field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    local_res10[0] = param_3;
    if (pTVar5 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = (param_2->List).Object;
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18._0_8_ = uVar2;
    local_18._8_8_ = uVar3;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar5,(FLinearColor *)&local_18._s_0,local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return;
}

// SetColorListChannelsFromUVs @ 14cde3ed0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetColorListChannelsFromUVs
          (FGeometryScriptColorList *param_1,FGeometryScriptUVList *param_2,int param_3,int param_4,
          FLinearColor *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  int local_res10;
  int local_res14;
  FLinearColor_u_0 local_18;
  
  pTVar5 = (param_2->List).Object;
  if (pTVar5 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptColorList::Reset(param_1,0);
      pTVar5 = (param_2->List).Object;
    }
    uVar2 = *(undefined8 *)&param_5->field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    local_res10 = param_3;
    local_res14 = param_4;
    if (pTVar5 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = (param_2->List).Object;
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18._0_8_ = uVar2;
    local_18._8_8_ = uVar3;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar5,(FLinearColor *)&local_18._s_0,&local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return;
}

// SetColorListChannelsFromVectors @ 14cde3fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetColorListChannelsFromVectors
          (FGeometryScriptColorList *param_1,FGeometryScriptVectorList *param_2,int param_3,
          int param_4,int param_5,FLinearColor *param_6)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  FLinearColor_u_0 local_58;
  int local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar3 = (param_2->List).Object;
  if (pTVar3 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptColorList::Reset(param_1,0);
      pTVar3 = (param_2->List).Object;
    }
    local_40 = param_5;
    local_68 = *(undefined8 *)&param_6->field0_0x0;
    uStack_60 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
    local_48 = param_3;
    local_44 = param_4;
    if (pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar3 = (param_2->List).Object;
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58._0_8_ = local_68;
    local_58._8_8_ = uStack_60;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar3,(FLinearColor *)&local_58._s_0,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return;
}

// SetColorListItem @ 14cde40e0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem
          (FGeometryScriptColorList *param_1,int param_2,FLinearColor *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  
  *param_4 = false;
  pTVar2 = (param_1->List).Object;
  if (((pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) && (-1 < param_2)) &&
     (param_2 < pTVar2->ArrayNum)) {
    uVar4 = *(undefined8 *)&param_3->field0_0x0;
    uVar5 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    *param_4 = true;
    if ((param_1->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = (param_1->List).Object;
    uVar7 = 0;
    if (param_2 < pTVar2->ArrayNum) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
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
    pFVar1 = (pTVar2->AllocatorInstance).Data + (longlong)param_2 * 0x10;
    *(undefined8 *)pFVar1 = uVar4;
    *(undefined8 *)(pFVar1 + 8) = uVar5;
  }
  return;
}

// SetIndexListItem @ 14cde4410

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem
          (FGeometryScriptIndexList *param_1,int param_2,int param_3,bool *param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  *param_4 = false;
  pTVar1 = (param_1->List).Object;
  if (((pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (-1 < param_2)) &&
     (param_2 < pTVar1->ArrayNum)) {
    *param_4 = true;
    if ((param_1->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar1 = (param_1->List).Object;
    uVar4 = 0;
    if (param_2 < pTVar1->ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 4) = param_3;
  }
  return;
}

// SetScalarListItem @ 14cde4ac0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem
          (FGeometryScriptScalarList *param_1,int param_2,double param_3,bool *param_4)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  *param_4 = false;
  pTVar1 = (param_1->List).Object;
  if (((pTVar1 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) && (-1 < param_2)) &&
     (param_2 < pTVar1->ArrayNum)) {
    *param_4 = true;
    if ((param_1->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
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
    pTVar1 = (param_1->List).Object;
    uVar4 = 0;
    if (param_2 < pTVar1->ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(double *)((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8) = param_3;
  }
  return;
}

// SetUVListComponentFromScalars @ 14cde5340

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetUVListComponentFromScalars
          (FGeometryScriptUVList *param_1,FGeometryScriptScalarList *param_2,int param_3,
          TVector2<double> *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  int local_res10 [2];
  TVector2<double>_u_0 local_18;
  
  pTVar5 = (param_2->List).Object;
  if (pTVar5 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptUVList::Reset(param_1,0);
      pTVar5 = (param_2->List).Object;
    }
    dVar2 = (param_4->field0_0x0)._s_0.X;
    dVar3 = (param_4->field0_0x0)._s_0.Y;
    local_res10[0] = param_3;
    if (pTVar5 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = (param_2->List).Object;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18._s_0.X = dVar2;
    local_18._s_0.Y = dVar3;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar5,(TVector2<double> *)&local_18._s_0,local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return;
}

// SetUVListItem @ 14cde5430

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem
          (FGeometryScriptUVList *param_1,int param_2,TVector2<double> *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  
  *param_4 = false;
  pTVar2 = (param_1->List).Object;
  if (((pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
      (-1 < param_2)) && (param_2 < pTVar2->ArrayNum)) {
    dVar4 = (param_3->field0_0x0)._s_0.X;
    dVar5 = (param_3->field0_0x0)._s_0.Y;
    *param_4 = true;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = (param_1->List).Object;
    uVar7 = 0;
    if (param_2 < pTVar2->ArrayNum) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
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
    pFVar1 = (pTVar2->AllocatorInstance).Data + (longlong)param_2 * 0x10;
    *(double *)pFVar1 = dVar4;
    *(double *)(pFVar1 + 8) = dVar5;
  }
  return;
}

// SetVectorListComponentFromScalars @ 14cde5510

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListComponentFromScalars
          (FGeometryScriptVectorList *param_1,FGeometryScriptScalarList *param_2,int param_3,
          TVector<double> *param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10 [2];
  TVector<double>_u_0 local_28;
  
  pTVar6 = (param_2->List).Object;
  if (pTVar6 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptVectorList::Reset(param_1,0);
      pTVar6 = (param_2->List).Object;
    }
    dVar3 = (param_4->field0_0x0)._s_0.X;
    dVar4 = (param_4->field0_0x0)._s_0.Y;
    dVar1 = (param_4->field0_0x0)._s_0.Z;
    local_res10[0] = param_3;
    if (pTVar6 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar6 = (param_2->List).Object;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_28._s_0.X = dVar3;
    local_28._s_0.Y = dVar4;
    local_28._s_0.Z = dVar1;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar6,(TVector<double> *)&local_28._s_0,local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return;
}

// SetVectorListComponentsFromUVs @ 14cde5610

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListComponentsFromUVs
          (FGeometryScriptVectorList *param_1,FGeometryScriptUVList *param_2,int param_3,int param_4
          ,TVector<double> *param_5)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10;
  int local_res14;
  TVector<double>_u_0 local_28;
  
  pTVar6 = (param_2->List).Object;
  if (pTVar6 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptVectorList::Reset(param_1,0);
      pTVar6 = (param_2->List).Object;
    }
    dVar3 = (param_5->field0_0x0)._s_0.X;
    dVar4 = (param_5->field0_0x0)._s_0.Y;
    dVar1 = (param_5->field0_0x0)._s_0.Z;
    local_res10 = param_3;
    local_res14 = param_4;
    if (pTVar6 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar6 = (param_2->List).Object;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_28._s_0.X = dVar3;
    local_28._s_0.Y = dVar4;
    local_28._s_0.Z = dVar1;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
              ((param_1->List).Object,pTVar6,(TVector<double> *)&local_28._s_0,&local_res10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return;
}

// SetVectorListItem @ 14cde5720

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem
          (FGeometryScriptVectorList *param_1,int param_2,TVector<double> *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  
  *param_4 = false;
  pTVar3 = (param_1->List).Object;
  if (((pTVar3 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
      (-1 < param_2)) && (param_2 < pTVar3->ArrayNum)) {
    dVar6 = (param_3->field0_0x0)._s_0.X;
    dVar7 = (param_3->field0_0x0)._s_0.Y;
    *param_4 = true;
    dVar2 = (param_3->field0_0x0)._s_0.Z;
    if ((param_1->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar3 = (param_1->List).Object;
    uVar9 = 0;
    if (param_2 < pTVar3->ArrayNum) {
      uVar9 = (uint)~param_2 >> 0x1f;
    }
    if (uVar9 == 0) {
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
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    pFVar1 = pFVar4 + (longlong)param_2 * 0x18;
    *(double *)pFVar1 = dVar6;
    *(double *)(pFVar1 + 8) = dVar7;
    *(double *)(pFVar4 + (longlong)param_2 * 0x18 + 0x10) = dVar2;
  }
  return;
}

// StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions @ 14cde7120

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::
StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x38;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearColorList @ 14cdf5ba0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execClearColorList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptColorList *pFVar2;
  FGeometryScriptColorList local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    pFVar2 = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearColorList(pFVar2,(FLinearColor *)&local_18._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.List.SharedReferenceCount.ReferenceController);
  return;
}

// execClearIndexList @ 14cdf5c90

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execClearIndexList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGeometryScriptIndexList *this;
  int local_res10 [2];
  int local_res20 [2];
  FGeometryScriptIndexList local_28;
  
  iVar6 = 0;
  local_28.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = (this->List).SharedReferenceCount.ReferenceController;
  local_res20[0] = local_res10[0];
  pTVar3 = (this->List).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar6 = pTVar3->ArrayNum;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FGeometryScriptIndexList::Reset(this,this->IndexType,0);
  if ((this->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<int,TSizedDefaultAllocator<32>_>::Init((this->List).Object,local_res20,iVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.List.SharedReferenceCount.ReferenceController);
  return;
}

// execClearScalarList @ 14cdf60f0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execClearScalarList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptScalarList *pFVar2;
  double local_res10;
  FGeometryScriptScalarList local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = 0.0;
  pFVar2 = &local_18;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    pFVar2 = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearScalarList(pFVar2,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  return;
}

// execClearUVList @ 14cdf61e0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execClearUVList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptUVList *pFVar2;
  FGeometryScriptUVList local_38;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38.List.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FGeometryScriptUVList *)param_2->MostRecentPropertyAddress != (FGeometryScriptUVList *)0x0) {
    pFVar2 = (FGeometryScriptUVList *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearUVList(pFVar2,(TVector2<double> *)&local_18._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.List.SharedReferenceCount.ReferenceController);
  return;
}

// execClearVectorList @ 14cdf62d0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execClearVectorList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGeometryScriptVectorList *this;
  FGeometryScriptVectorList local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  iVar6 = 0;
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
  this = &local_58;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
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
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = (this->List).SharedReferenceCount.ReferenceController;
  pTVar3 = (this->List).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar6 = pTVar3->ArrayNum;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FGeometryScriptVectorList::Reset(this,0);
  if ((this->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            ((this->List).Object,(TVector<double> *)&local_28._s_0,iVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.List.SharedReferenceCount.ReferenceController);
  return;
}

// execConvertArrayToColorList @ 14cdf9490

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToColorList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptColorList *this;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_28;
  FGeometryScriptColorList local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar1 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_28;
  if (pTVar1 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  local_18.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    this = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptColorList::Reset(this,0);
  if ((this->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Append<FLinearColor,TSizedDefaultAllocator<32>_>
            ((this->List).Object,pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConvertArrayToIndexList @ 14cdf95e0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToIndexList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptIndexList *this;
  EGeometryScriptIndexType local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptIndexList local_28;
  
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
  pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  local_28.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_38;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = Any;
  this = &local_28;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptIndexList::Reset(this,local_res10[0],0);
  if ((this->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
            ((this->List).Object,pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.List.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConvertArrayToScalarList @ 14cdf9780

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToScalarList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptScalarList *this;
  TArray<double,TSizedDefaultAllocator<32>_> local_28;
  FGeometryScriptScalarList local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar1 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_28;
  if (pTVar1 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  local_18.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    this = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptScalarList::Reset(this,0);
  if ((this->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
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
  TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
            ((this->List).Object,pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConvertArrayToTriangleList @ 14cdf98d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToTriangleList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> **ppTVar8;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar9;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> FStack_40;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_38;
  TReferenceControllerBase<1> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar2 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar9 = &local_38;
  if (pTVar2 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = pTVar2;
  }
  local_28 = (TReferenceControllerBase<1> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppTVar8 = &local_28;
  if ((TReferenceControllerBase<1> **)param_2->MostRecentPropertyAddress !=
      (TReferenceControllerBase<1> **)0x0) {
    ppTVar8 = (TReferenceControllerBase<1> **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*ppTVar8 == (TReferenceControllerBase<1> *)0x0) {
    FStack_40.ReferenceController = ::operator_new(0x20);
    if (FStack_40.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_48 = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_40.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_40.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6 = FStack_40.ReferenceController + 1;
      (FStack_40.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_40.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      FStack_40.ReferenceController[1]._padding_ = 0;
      FStack_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_40.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar7 = FStack_40.ReferenceController;
      local_48 = pTVar6;
    }
    if (ppTVar8 != &local_48) {
      *ppTVar8 = pTVar6;
      local_48 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(ppTVar8 + 1),&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (*ppTVar8 == (TReferenceControllerBase<1> *)0x0) {
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
  pTVar7 = *ppTVar8;
  aVar1 = pTVar7->WeakReferenceCount;
  *(undefined4 *)&(pTVar7->SharedReferenceCount).field_0x0 = 0;
  if ((int)aVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)pTVar7,0,(int *)&pTVar7->WeakReferenceCount);
  }
  if (*ppTVar8 == (TReferenceControllerBase<1> *)0x0) {
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
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
            ((TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)*ppTVar8,pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConvertArrayToUVList @ 14cdf9b70

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToUVList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptUVList *this;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_28;
  FGeometryScriptUVList local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar1 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_28;
  if (pTVar1 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  local_18.List.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FGeometryScriptUVList *)param_2->MostRecentPropertyAddress != (FGeometryScriptUVList *)0x0) {
    this = (FGeometryScriptUVList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptUVList::Reset(this,0);
  if ((this->List).Object == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
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
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>((this->List).Object,pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConvertArrayToVectorList @ 14cdf9cc0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToVectorList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptVectorList *this;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  FGeometryScriptVectorList local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar1 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_28;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  local_18.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptVectorList::Reset(this,0);
  if ((this->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
  Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>((this->List).Object,pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConvertColorListToArray @ 14cdf9f70

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertColorListToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_28;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar3 = pTStack_10;
  pTVar2 = local_18;
  this = &local_28;
  if ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  if (pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    Append<FLinearColor,TSizedDefaultAllocator<32>_>(this,pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execConvertIndexListToArray @ 14cdfa0d0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertIndexListToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  undefined1 local_28 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28[0] = 0;
  local_20 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
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
  pTVar3 = pTStack_18;
  pTVar2 = local_20;
  this = &local_38;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>(this,pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execConvertScalarListToArray @ 14cdfa5f0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertScalarListToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  TArray<double,TSizedDefaultAllocator<32>_> local_28;
  TArray<double,TSizedDefaultAllocator<32>_> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar3 = pTStack_10;
  pTVar2 = local_18;
  this = &local_28;
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  if (pTVar2 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
              (this,pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execConvertTriangleListToArray @ 14cdfa740

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertTriangleListToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *this;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_28;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar3 = pTStack_10;
  pTVar2 = local_18;
  this = &local_28;
  if ((TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  if (pTVar2 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>(this,pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execConvertUVListToArray @ 14cdfa8a0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertUVListToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_28;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar3 = pTStack_10;
  pTVar2 = local_18;
  this = &local_28;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  if (pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>(this,pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execConvertVectorListToArray @ 14cdfaa00

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execConvertVectorListToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar3 = pTStack_10;
  pTVar2 = local_18;
  this = &local_28;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
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
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execDuplicateColorList @ 14ce00d50

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateColorList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FGeometryScriptColorList *this;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FGeometryScriptColorList local_18;
  
  local_28 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar4 = pTStack_20;
  pTVar3 = local_28;
  this = &local_18;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    this = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptColorList::Reset(this,0);
  if (pTVar3 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=((this->List).Object,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execDuplicateIndexList @ 14ce00ed0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateIndexList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FGeometryScriptIndexList *this;
  EGeometryScriptIndexType local_38 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  FGeometryScriptIndexList local_20;
  
  local_38[0] = Any;
  local_30 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_20.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_20.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_20.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pTVar4 = pTStack_28;
  pTVar3 = local_30;
  this = &local_20;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptIndexList::Reset(this,local_38[0],0);
  if (pTVar3 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=((this->List).Object,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execDuplicateScalarList @ 14ce01060

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateScalarList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  int *piVar5;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FGeometryScriptScalarList *this;
  TArray<double,TSizedDefaultAllocator<32>_> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FGeometryScriptScalarList local_18;
  
  local_28 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_18.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar7 = pTStack_20;
  pTVar6 = local_28;
  this = &local_18;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    this = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptScalarList::Reset(this,0);
  if (pTVar6 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (this->List).Object;
  if (pTVar3 != pTVar6) {
    iVar1 = pTVar6->ArrayNum;
    piVar5 = &pTVar3->ArrayMax;
    _Src = (pTVar6->AllocatorInstance).Data;
    pTVar3->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar5 == 0)) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,*piVar5,&pTVar3->AllocatorInstance,iVar1,piVar5);
      if (iVar1 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execDuplicateUVList @ 14ce01240

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateUVList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FGeometryScriptUVList *this;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FGeometryScriptUVList local_18;
  
  local_28 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.List.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  pTVar4 = pTStack_20;
  pTVar3 = local_28;
  this = &local_18;
  if ((FGeometryScriptUVList *)param_2->MostRecentPropertyAddress != (FGeometryScriptUVList *)0x0) {
    this = (FGeometryScriptUVList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptUVList::Reset(this,0);
  if (pTVar3 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->List).Object == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
            ((this->List).Object,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execDuplicateVectorList @ 14ce013c0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateVectorList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FGeometryScriptVectorList *this;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FGeometryScriptVectorList local_18;
  
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
  pTVar4 = pTStack_20;
  pTVar3 = local_28;
  this = &local_18;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptVectorList::Reset(this,0);
  if (pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            ((this->List).Object,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execExtractColorListChannel @ 14ce017f0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FGeometryScriptScalarList *this;
  int local_res10 [2];
  int local_res20 [2];
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FGeometryScriptScalarList local_28;
  
  local_38 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    this = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar6 = pTStack_30;
  pTVar5 = local_38;
  iVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptScalarList::Reset(this,0);
  if (pTVar5 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res20[0] = iVar4;
    if ((this->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
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
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              (pTVar5,(this->List).Object,local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execExtractColorListChannels @ 14ce01980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannels
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FGeometryScriptVectorList *this;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [2];
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FGeometryScriptVectorList local_58;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_58.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_70[0] = 0;
  this = &local_58;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_74 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  local_78 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar8 = pTStack_60;
  pTVar7 = local_68;
  iVar6 = local_70[0];
  uVar5 = local_74;
  uVar4 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptVectorList::Reset(this,0);
  if (pTVar7 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    local_48 = iVar6;
    local_44 = uVar5;
    local_40 = uVar4;
    if ((this->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
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
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              (pTVar7,(this->List).Object,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// execExtractUVListComponent @ 14ce01ba0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execExtractUVListComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  code *pcVar3;
  double dVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TRefCountPtr<ITextData> TVar7;
  bool bVar8;
  uint uVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  uint uVar12;
  FFormatArgumentValue_u_8 FVar13;
  FGeometryScriptScalarList *this_00;
  longlong lVar14;
  uint uVar15;
  uint local_res10 [4];
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  FGeometryScriptScalarList local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  FText local_68;
  FTextFormat local_58 [2];
  
  local_e8 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_e0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_d8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = 0;
  this_00 = &local_d8;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    this_00 = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar6 = pTStack_e0;
  pTVar5 = local_e8;
  uVar12 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar13 = (FFormatArgumentValue_u_8)(longlong)(int)local_res10[0];
  if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_e0->SharedReferenceCount = (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptScalarList::Reset(this_00,0);
  if (pTVar5 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (((this_00->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this = (this_00->List).Object;
    if (1 < uVar12) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"UGeometryScriptLibrary_ListUtilityFunctions",
                           L"InvalidListElementComponentIndex",
                           L"Component Index {0} will be clamped to valid range (0-{1})");
      pFVar11 = FTextFormat::FTextFormat(local_58,pFVar10,Default);
      local_80 = 1;
      local_a8.Type = Int;
      local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_a8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_70 = 0;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 2;
      local_a8.field1_0x8 = FVar13;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_f8.AllocatorInstance.Data,&local_a8,2);
      local_b8.TextFormatData.Object = (pFVar11->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_c8,&local_b8,&local_f8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
      if (2 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_c8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TVar7.Reference = local_c8.TextData.Reference;
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res20);
        (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))(local_c8.TextData.Reference);
        }
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    uVar15 = 1;
    if ((int)uVar12 < 1) {
      uVar15 = uVar12;
    }
    uVar12 = 0;
    if (0 < (int)uVar15) {
      uVar12 = uVar15;
    }
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,pTVar5->ArrayNum,Default);
    uVar15 = 0;
    if (0 < pTVar5->ArrayNum) {
      lVar14 = 0;
      do {
        dVar4 = UE::ListUtilityFunctionsLocals::AccessListHelper(pTVar5,uVar15,uVar12);
        uVar9 = 0;
        if ((int)uVar15 < this->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = uVar15 + 1;
        *(double *)((this->AllocatorInstance).Data + lVar14) = dVar4;
        lVar14 = lVar14 + 8;
      } while ((int)uVar15 < pTVar5->ArrayNum);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
  return;
}

// execExtractVectorListComponent @ 14ce01f90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execExtractVectorListComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this;
  code *pcVar3;
  double dVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TRefCountPtr<ITextData> TVar7;
  bool bVar8;
  uint uVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  uint uVar12;
  FFormatArgumentValue_u_8 FVar13;
  FGeometryScriptScalarList *this_00;
  longlong lVar14;
  uint uVar15;
  uint local_res10 [4];
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  FGeometryScriptScalarList local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  FText local_68;
  FTextFormat local_58 [2];
  
  local_e8 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_e0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8.List.Object = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  local_d8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = 0;
  this_00 = &local_d8;
  if ((FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptScalarList *)0x0) {
    this_00 = (FGeometryScriptScalarList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar6 = pTStack_e0;
  pTVar5 = local_e8;
  uVar12 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar13 = (FFormatArgumentValue_u_8)(longlong)(int)local_res10[0];
  if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_e0->SharedReferenceCount = (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptScalarList::Reset(this_00,0);
  if (pTVar5 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (((this_00->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this = (this_00->List).Object;
    if (2 < uVar12) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"UGeometryScriptLibrary_ListUtilityFunctions",
                           L"InvalidListElementComponentIndex",
                           L"Component Index {0} will be clamped to valid range (0-{1})");
      pFVar11 = FTextFormat::FTextFormat(local_58,pFVar10,Default);
      local_80 = 2;
      local_a8.Type = Int;
      local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_a8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_70 = 0;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 2;
      local_a8.field1_0x8 = FVar13;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_f8.AllocatorInstance.Data,&local_a8,2);
      local_b8.TextFormatData.Object = (pFVar11->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_c8,&local_b8,&local_f8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
      if (2 < (byte)LogGeometry._0_1_) {
        FText::ToString(&local_c8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TVar7.Reference = local_c8.TextData.Reference;
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res20);
        (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))(local_c8.TextData.Reference);
        }
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    uVar15 = 2;
    if ((int)uVar12 < 2) {
      uVar15 = uVar12;
    }
    uVar12 = 0;
    if (0 < (int)uVar15) {
      uVar12 = uVar15;
    }
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,pTVar5->ArrayNum,Default);
    uVar15 = 0;
    if (0 < pTVar5->ArrayNum) {
      lVar14 = 0;
      do {
        dVar4 = UE::ListUtilityFunctionsLocals::AccessListHelper(pTVar5,uVar15,uVar12);
        uVar9 = 0;
        if ((int)uVar15 < this->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = uVar15 + 1;
        *(double *)((this->AllocatorInstance).Data + lVar14) = dVar4;
        lVar14 = lVar14 + 8;
      } while ((int)uVar15 < pTVar5->ArrayNum);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
  return;
}

// execExtractVectorListComponentsAsUVs @ 14ce02370

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execExtractVectorListComponentsAsUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FGeometryScriptUVList *this;
  undefined4 local_res10 [2];
  int local_res20 [2];
  int local_48;
  undefined4 local_44;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  FGeometryScriptUVList local_30;
  
  local_40 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_30.List.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_30.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  this = &local_30;
  if ((FGeometryScriptUVList *)param_2->MostRecentPropertyAddress != (FGeometryScriptUVList *)0x0) {
    this = (FGeometryScriptUVList *)param_2->MostRecentPropertyAddress;
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
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar7 = pTStack_38;
  pTVar6 = local_40;
  iVar5 = local_res20[0];
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_38->SharedReferenceCount = (atomic<int>)((int)pTStack_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptUVList::Reset(this,0);
  if (pTVar6 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_48 = iVar5;
    local_44 = uVar4;
    if ((this->List).Object == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0
       ) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::ListUtilityFunctionsLocals::
    ExtractArrayComponentsFromArrayHelper<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
              (pTVar6,(this->List).Object,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// execGetColorListItem @ 14ce03a00

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uchar *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uchar local_res10 [8];
  uint local_res18 [4];
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  pTVar7 = pTStack_40;
  plVar6 = local_48;
  uVar5 = local_res18[0];
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_res18[0];
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar9 = '\0';
  if (((local_48 == (longlong *)0x0) || ((int)uVar5 < 0)) || ((int)local_48[1] <= (int)uVar5)) {
    uVar12 = FLinearColor::White.field0_0x0._0_4_;
    uVar13 = FLinearColor::White.field0_0x0._4_4_;
    uVar14 = FLinearColor::White.field0_0x0._8_4_;
    uVar15 = FLinearColor::White.field0_0x0._12_4_;
  }
  else {
    *puVar9 = '\x01';
    uVar11 = 0;
    if ((int)uVar5 < (int)local_48[1]) {
      uVar11 = ~uVar5 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar2 = (undefined4 *)(*plVar6 + lVar10 * 0x10);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  *(undefined4 *)param_3 = uVar12;
  *(undefined4 *)((longlong)param_3 + 4) = uVar13;
  *(undefined4 *)((longlong)param_3 + 8) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetColorListLastIndex @ 14ce03bd0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLastIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(local_18 + 8) + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  *(int *)param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execGetColorListLength @ 14ce03c80

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLength
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

// execGetIndexListItem @ 14ce03d30

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  uint uVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uchar *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  uchar local_res10 [8];
  uint local_res18 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  
  local_48[0] = 0;
  local_40 = (longlong *)0x0;
  pTStack_38 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
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
  pTVar6 = pTStack_38;
  plVar5 = local_40;
  uVar4 = local_res18[0];
  puVar8 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_res18[0];
  if (pTStack_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_38->SharedReferenceCount = (atomic<int>)((int)pTStack_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar8 = '\0';
  if (((local_40 == (longlong *)0x0) || ((int)uVar4 < 0)) || ((int)local_40[1] <= (int)uVar4)) {
    uVar9 = 0xffffffff;
  }
  else {
    *puVar8 = '\x01';
    uVar11 = 0;
    if ((int)uVar4 < (int)local_40[1]) {
      uVar11 = ~uVar4 >> 0x1f;
    }
    if (uVar11 == 0) {
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
    uVar9 = *(undefined4 *)(*plVar5 + lVar10 * 4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined4 *)param_3 = uVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// execGetIndexListLastIndex @ 14ce03ef0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLastIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  undefined1 local_28 [8];
  longlong local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28[0] = 0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_20 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(local_20 + 8) + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(int *)param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetIndexListLength @ 14ce03fb0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 local_28 [8];
  longlong local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28[0] = 0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  uVar2 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_20 != 0) {
    uVar2 = *(undefined4 *)(local_20 + 8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined4 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetScalarListItem @ 14ce06040

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined8 uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uchar *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uchar local_res10 [8];
  uint local_res18 [4];
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  pTVar7 = pTStack_40;
  plVar6 = local_48;
  uVar5 = local_res18[0];
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_res18[0];
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar9 = '\0';
  if (((local_48 == (longlong *)0x0) || ((int)uVar5 < 0)) || ((int)local_48[1] <= (int)uVar5)) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    *puVar9 = '\x01';
    uVar11 = 0;
    if ((int)uVar5 < (int)local_48[1]) {
      uVar11 = ~uVar5 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar2 = *(undefined8 *)(*plVar6 + lVar10 * 8);
    uVar12 = (undefined4)uVar2;
    uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  *(ulonglong *)param_3 = CONCAT44(uVar13,uVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetScalarListLastIndex @ 14ce06200

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLastIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(local_18 + 8) + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  *(int *)param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execGetScalarListLength @ 14ce062b0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLength
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

// execGetTriangleListItem @ 14ce08a30

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined8 uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uchar *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uchar local_res10 [8];
  uint local_res18 [4];
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  pTVar7 = pTStack_40;
  plVar6 = local_48;
  uVar5 = local_res18[0];
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar11 = (longlong)(int)local_res18[0];
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar9 = '\0';
  if (((local_48 == (longlong *)0x0) || ((int)uVar5 < 0)) || ((int)local_48[1] <= (int)uVar5)) {
    uVar13 = (undefined4)UE::Math::TIntVector3<int>::NoneValue.field0_0x0._0_8_;
    uVar14 = (undefined4)((ulonglong)UE::Math::TIntVector3<int>::NoneValue.field0_0x0._0_8_ >> 0x20)
    ;
    uVar10 = UE::Math::TIntVector3<int>::NoneValue.field0_0x0._s_0.Z;
  }
  else {
    *puVar9 = '\x01';
    uVar12 = 0;
    if ((int)uVar5 < (int)local_48[1]) {
      uVar12 = ~uVar5 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar2 = *(undefined8 *)(*plVar6 + lVar11 * 0xc);
    uVar13 = (undefined4)uVar2;
    uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar10 = *(int *)(*plVar6 + 8 + lVar11 * 0xc);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  *(ulonglong *)param_3 = CONCAT44(uVar14,uVar13);
  *(undefined4 *)((longlong)param_3 + 8) = uVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetTriangleListLastTriangle @ 14ce08c10

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLastTriangle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar3 = 0;
  if ((local_18 != 0) && (iVar2 = *(int *)(local_18 + 8) + -1, 0 < iVar2)) {
    iVar3 = iVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  *(int *)param_3 = iVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execGetTriangleListLength @ 14ce08cd0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLength
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

// execGetUVListItem @ 14ce09450

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uchar *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uchar local_res10 [8];
  uint local_res18 [4];
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  pTVar7 = pTStack_40;
  plVar6 = local_48;
  uVar5 = local_res18[0];
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_res18[0];
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar9 = '\0';
  if (((local_48 == (longlong *)0x0) || ((int)uVar5 < 0)) || ((int)local_48[1] <= (int)uVar5)) {
    uVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    uVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    uVar14 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
    uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    *puVar9 = '\x01';
    uVar11 = 0;
    if ((int)uVar5 < (int)local_48[1]) {
      uVar11 = ~uVar5 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar2 = (undefined4 *)(*plVar6 + lVar10 * 0x10);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  *(undefined4 *)param_3 = uVar12;
  *(undefined4 *)((longlong)param_3 + 4) = uVar13;
  *(undefined4 *)((longlong)param_3 + 8) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetUVListLastIndex @ 14ce09620

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLastIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(local_18 + 8) + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  *(int *)param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execGetUVListLength @ 14ce096d0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLength
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

// execGetVectorListItem @ 14ce09780

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListItem
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
  longlong *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  local_58 = (longlong *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
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
  pTVar8 = pTStack_50;
  plVar7 = local_58;
  uVar6 = local_res18[0];
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar11 = (longlong)(int)local_res18[0];
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar10 = '\0';
  if (((local_58 == (longlong *)0x0) || ((int)uVar6 < 0)) || ((int)local_58[1] <= (int)uVar6)) {
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
    if ((int)uVar6 < (int)local_58[1]) {
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// execGetVectorListLastIndex @ 14ce09970

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLastIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(local_18 + 8) + -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  *(int *)param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execGetVectorListLength @ 14ce09a20

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLength
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

// execSetColorListChannelFromScalars @ 14ce0f880

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListChannelFromScalars
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar7;
  FGeometryScriptColorList *this;
  int local_res10 [4];
  int local_res20 [2];
  TArray<double,TSizedDefaultAllocator<32>_> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FGeometryScriptColorList local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  FLinearColor_u_0 local_38 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
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
  local_68 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  this = &local_58;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    this = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar5 = pTStack_60;
  pTVar4 = local_68;
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_68 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (this->List).Object;
    if (pTVar7 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptColorList::Reset(this,0);
      pTVar7 = (this->List).Object;
    }
    local_res20[0] = iVar3;
    if (pTVar7 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_38[0]._0_8_ = local_48;
    local_38[0]._8_8_ = uStack_40;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((this->List).Object,pTVar4,(FLinearColor *)&local_38[0]._s_0,local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetColorListChannelsFromUVs @ 14ce0fa90

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListChannelsFromUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar8;
  FGeometryScriptColorList *this;
  undefined4 local_res10 [4];
  int local_res20 [2];
  int local_88;
  undefined4 local_84;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  FGeometryScriptColorList local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  FLinearColor_u_0 local_48 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_70.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  local_70.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_78 = (TReferenceControllerBase<1> *)0x0;
  this = &local_70;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    this = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pTVar6 = pTStack_78;
  pTVar5 = local_80;
  iVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_78->SharedReferenceCount = (atomic<int>)((int)pTStack_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_80 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8 = (this->List).Object;
    if (pTVar8 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptColorList::Reset(this,0);
      pTVar8 = (this->List).Object;
    }
    local_88 = iVar4;
    local_84 = uVar3;
    if (pTVar8 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_48[0]._0_8_ = local_60;
    local_48[0]._8_8_ = uStack_58;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
              ((this->List).Object,pTVar5,(FLinearColor *)&local_48[0]._s_0,&local_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetColorListChannelsFromVectors @ 14ce0fcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListChannelsFromVectors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar9;
  FGeometryScriptColorList *this;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FGeometryScriptColorList local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  FLinearColor_u_0 local_68;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  local_88.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  this = &local_88;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    this = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_a4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
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
  pTVar7 = pTStack_90;
  pTVar6 = local_98;
  iVar5 = local_a0[0];
  uVar4 = local_a4;
  uVar3 = local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_98 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (this->List).Object;
    if (pTVar9 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptColorList::Reset(this,0);
      pTVar9 = (this->List).Object;
    }
    local_58 = iVar5;
    local_54 = uVar4;
    local_50 = uVar3;
    if (pTVar9 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_68._0_8_ = local_78;
    local_68._8_8_ = uStack_70;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<float,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((this->List).Object,pTVar6,(FLinearColor *)&local_68._s_0,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetColorListItem @ 14ce0ff60

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uchar *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uchar local_res10 [8];
  uint local_res20 [2];
  longlong local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  plVar8 = &local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  uVar4 = local_res20[0];
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_res20[0];
  *puVar6 = '\0';
  if (((*plVar8 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < *(int *)(*plVar8 + 8))) {
    *puVar6 = '\x01';
    if (*plVar8 == 0) {
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
    plVar8 = (longlong *)*plVar8;
    uVar9 = 0;
    if ((int)uVar4 < (int)plVar8[1]) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar1 = (undefined8 *)(*plVar8 + lVar7 * 0x10);
    *puVar1 = local_28;
    puVar1[1] = uStack_20;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execSetIndexListItem @ 14ce10800

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetIndexListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  uchar *puVar7;
  longlong lVar8;
  uchar *puVar9;
  uint uVar10;
  uchar local_res10 [16];
  undefined4 local_res20 [2];
  uint local_38 [2];
  uchar local_30 [8];
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_30[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  local_38[0] = 0;
  puVar9 = local_30;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
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
  uVar5 = local_38[0];
  uVar4 = local_res20[0];
  puVar7 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_38[0];
  *puVar7 = '\0';
  if (((*(longlong *)(puVar9 + 8) != 0) && (-1 < (int)local_38[0])) &&
     ((int)local_38[0] < *(int *)(*(longlong *)(puVar9 + 8) + 8))) {
    *puVar7 = '\x01';
    if (*(longlong *)(puVar9 + 8) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)(puVar9 + 8);
    uVar10 = 0;
    if ((int)uVar5 < (int)plVar2[1]) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
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
    *(undefined4 *)(*plVar2 + lVar8 * 4) = uVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execSetScalarListItem @ 14ce11620

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetScalarListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  uchar *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uchar local_res10 [8];
  uint local_res20 [2];
  undefined8 local_38;
  longlong local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_30 = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  plVar8 = &local_30;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_38 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  uVar4 = local_38;
  uVar3 = local_res20[0];
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_res20[0];
  *puVar6 = '\0';
  if (((*plVar8 != 0) && (-1 < (int)uVar3)) && ((int)uVar3 < *(int *)(*plVar8 + 8))) {
    *puVar6 = '\x01';
    if (*plVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar8 = (longlong *)*plVar8;
    uVar9 = 0;
    if ((int)uVar3 < (int)plVar8[1]) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(*plVar8 + lVar7 * 8) = uVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execSetUVListComponentFromScalars @ 14ce13930

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetUVListComponentFromScalars
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FGeometryScriptUVList *this;
  int local_res10 [4];
  int local_res20 [2];
  TArray<double,TSizedDefaultAllocator<32>_> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FGeometryScriptUVList local_58;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.List.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
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
  local_68 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  this = &local_58;
  if ((FGeometryScriptUVList *)param_2->MostRecentPropertyAddress != (FGeometryScriptUVList *)0x0) {
    this = (FGeometryScriptUVList *)param_2->MostRecentPropertyAddress;
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar5 = pTStack_60;
  pTVar4 = local_68;
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_68 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (this->List).Object;
    if (pTVar7 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptUVList::Reset(this,0);
      pTVar7 = (this->List).Object;
    }
    local_res20[0] = iVar3;
    if (pTVar7 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_38[0]._s_0.X = local_48;
    local_38[0]._s_0.Y = dStack_40;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((this->List).Object,pTVar4,(TVector2<double> *)&local_38[0]._s_0,local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetUVListItem @ 14ce13b40

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetUVListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uchar *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uchar local_res10 [8];
  uint local_res20 [2];
  longlong local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  plVar8 = &local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  uVar4 = local_res20[0];
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_res20[0];
  *puVar6 = '\0';
  if (((*plVar8 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < *(int *)(*plVar8 + 8))) {
    *puVar6 = '\x01';
    if (*plVar8 == 0) {
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
    plVar8 = (longlong *)*plVar8;
    uVar9 = 0;
    if ((int)uVar4 < (int)plVar8[1]) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar1 = (undefined8 *)(*plVar8 + lVar7 * 0x10);
    *puVar1 = local_28;
    puVar1[1] = uStack_20;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execSetVectorListComponentFromScalars @ 14ce13d70

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetVectorListComponentFromScalars
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FGeometryScriptVectorList *this;
  int local_res10 [2];
  int local_res20 [2];
  TArray<double,TSizedDefaultAllocator<32>_> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FGeometryScriptVectorList local_88;
  double local_78;
  double dStack_70;
  double local_68;
  TVector<double>_u_0 local_58 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_88.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  this = &local_88;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
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
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  pTVar5 = pTStack_90;
  pTVar4 = local_98;
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_98 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (this->List).Object;
    if (pTVar7 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptVectorList::Reset(this,0);
      pTVar7 = (this->List).Object;
    }
    local_res20[0] = iVar3;
    if (pTVar7 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_58[0]._s_0.X = local_78;
    local_58[0]._s_0.Y = dStack_70;
    local_58[0]._s_0.Z = local_68;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<double,TSizedDefaultAllocator<32>_>_>
              ((this->List).Object,pTVar4,(TVector<double> *)&local_58[0]._s_0,local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetVectorListComponentsFromUVs @ 14ce13f80

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetVectorListComponentsFromUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FGeometryScriptVectorList *this;
  undefined4 local_res10 [4];
  int local_res20 [2];
  int local_a8;
  undefined4 local_a4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  FGeometryScriptVectorList local_90;
  double local_80;
  double dStack_78;
  double local_70;
  TVector<double>_u_0 local_68 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_90.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_90.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_a0 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_98 = (TReferenceControllerBase<1> *)0x0;
  this = &local_90;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pTVar6 = pTStack_98;
  pTVar5 = local_a0;
  iVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_98->SharedReferenceCount = (atomic<int>)((int)pTStack_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_a0 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8 = (this->List).Object;
    if (pTVar8 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FGeometryScriptVectorList::Reset(this,0);
      pTVar8 = (this->List).Object;
    }
    local_a8 = iVar4;
    local_a4 = uVar3;
    if (pTVar8 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_68[0]._s_0.X = local_80;
    local_68[0]._s_0.Y = dStack_78;
    local_68[0]._s_0.Z = local_70;
    UE::ListUtilityFunctionsLocals::
    SetArrayComponentsFromArrayHelper<double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
              ((this->List).Object,pTVar5,(TVector<double> *)&local_68[0]._s_0,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetVectorListItem @ 14ce141d0

void __cdecl
UGeometryScriptLibrary_ListUtilityFunctions::execSetVectorListItem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uchar *puVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  uchar local_res10 [8];
  uint local_res20 [2];
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  plVar9 = &local_58;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
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
  uVar5 = local_res20[0];
  puVar7 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_res20[0];
  *puVar7 = '\0';
  if (((*plVar9 != 0) && (-1 < (int)uVar5)) && ((int)uVar5 < *(int *)(*plVar9 + 8))) {
    *puVar7 = '\x01';
    if (*plVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar9 = (longlong *)*plVar9;
    uVar10 = 0;
    if ((int)uVar5 < (int)plVar9[1]) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *plVar9;
    puVar1 = (undefined8 *)(lVar3 + lVar8 * 0x18);
    *puVar1 = local_48;
    puVar1[1] = uStack_40;
    *(undefined8 *)(lVar3 + 0x10 + lVar8 * 0x18) = local_38;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

